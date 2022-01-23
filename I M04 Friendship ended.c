/*
Ramesh is learning to chat on Facebook and he wants to say “Goodbye” (no space between Good and bye) to his friend Suresh. Ramesh typed the word w. It is considered that Ramesh managed to say “Goodbye” if several letters can be deleted from the typed word w so that it results in the word "Goodbye". For example, if Ramesh types the word "btaGpotodbqqyeekje", it will be considered that he said “Goodbye”, and if he types "pngodtbeyz", it will be considered that he didn't manage to say Goodbye. Determine whether Ramesh managed to say “Goodbye” by the given word w to Suresh.

Input
Input contains one string.
Input string consists of small and capital alphabets only.

Output
Output 'Yes' if he managed to say goodbye. else output 'No'.

Sample Input 0

btaGpotodbqqyeekje
Sample Output 0

Yes
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch[10]="Goodbye";
    char c[100000];
    scanf("%s",c);
    int j=0;
    for(int i=0;c[i];i++)
    {
        if(ch[j]==c[i])
        {
            j++;
        }
        if(j==7){
            printf("Yes");
            return 0;
        }
    }
    
    printf("No");
    return 0;
}