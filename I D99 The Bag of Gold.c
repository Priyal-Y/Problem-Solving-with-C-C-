/*
You are given an empty bag that is supposed to be filled with gold, and it can carry at max W kgs of gold in it.

You are given N samples of gold, with the ith of them weighing Wi and having value Vi.

Your task is to fill the bag with exactly W kgs of gold such that the total value of the gold inside the bag is maximum.

You need not take the entire samples of gold, you can break them down and take fractions of those samples as well. For example, if you have two samples, one with weight 10 and value 10 and another with weight 5 and value 10, you can fill a 5 kg capacity bag with 2.5 kg of first sample and 2.5 kg of second sample. The value for such a bag will be the sum of values of all the pieces, i.e. for the first sample 2.5 kg has value 2.5 and for the second sample 2.5 kg has value 5, hence the total value of the bag becomes 7.5

INPUT
First line contains two integers, N and W.
Second onwards, there are N lines with each of them containing two integers, first one being the weight of the sample and the second one being the value of the sample

OUTPUT
Print one number, the maximum attainable value when the bag is filled with W kgs of gold. If it is not possible to fill the bag with W kgs of gold, print -1.

CONSTRAINTS
1 ≤ N ≤ 105
1 ≤ W ≤ 109
1 ≤ weights, values ≤ 109

Sample Input 0

3 10
5 5
3 10
4 4
Sample Output 0

17.000000000000
Explanation 0

We can take 3 kgs of sample 2, 4 kgs of sample 1 and 3 kgs of sample 3 to attain the maximum value
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct bag{
    double w,p;
};

int cmp(struct bag*a,struct bag *b)
{
    double x=a->p/a->w;
    double y=b->p/b->w;
    if(x==y) return 0;
    else if(x>y) return -1;
    else return 1;
    
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    scanf("%d %d",&n,&m);
    struct bag a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%lf %lf",&a[i].w,&a[i].p);
    }
    qsort(a,n,sizeof(struct bag),cmp);
    int i=0;
    double p=0;
    while(i<n&&m>=a[i].w)
    {
        p=p+a[i].p;
        m=m-a[i].w;
        i++;
    }
    if(i<n&&m>0){
        p=p+a[i].p*m/(double)a[i].w;
    } 
    
    if(i==n&&m>0)
    {
         printf("-1");
        return 0;
    }
    
    printf("%.12lf",p);
    return 0;
}