/*
strstr is a function that returns 1 if one string is present as substring in another and 0 otherwise. You are to write a program to print the number of times one string is present in the other as a substring.

Input Format

Two lines of input consisting of two strings.

Constraints

1 <= length of strings <= 100

Output Format

Output one number, the number of times any one string appears in the other.

Sample Input 0

banana
ana
Sample Output 0

2
Explanation 0

b(ana)na and ban(ana) so answer is 2

Sample Input 1

a
adamant
Sample Output 1

3
Explanation 1

(a)damant, ad(a)mant and adam(a)nt. So answer is 3.
*/




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

/* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    


char s1[101],s2[101];
    int i,c=0,j,m,n,p=0;
    scanf("%s%s",s1,s2);
    m=strlen(s1);
    n=strlen(s2);
    i=0;
    if(m==n)
    {
        if(!strcmp(s1,s2))
            c++;
    }
    else if(m>n)
    {
        i=0;

        for(i=0;i<=m-n;i++)
        {
            j=0;
            p=0;
            while(s2[j])
            {
                if(s1[i+j]!=s2[j])
                {
                    p=1;
                    break;

                }
                j++;
            }
            if(p==0)
                c++;

        }

    }
    else
    {
        i=0;
         for(i=0;i<=n-m;i++)
        {

            j=0;
            p=0;
            while(s1[j])
            {
                if(s2[i+j]!=s1[j])
                {
                    p=1;
                    break;

                }
                j++;
            }
            if(p==0)
                c++;
        }
    }
    printf("%d",c);
    return 0;
   
}
