/*
You are given two sequences of integers A(1,2...N) and B(1,2...M).

A newer function F(A, B) has been devised to calculate the similarity between two integer sequences. Your task is to calculate F(A, B).

F(A, B) is the maximum possible number k such that there exists a certain set :
{a1, a2, ... ak} with a1 ≤ a2 ≤ ... ≤ ak
and another set
{b1, b2, ... bk} with b1 ≤ b2 ≤ ... ≤ bk
such that
for every i from 1 to k, we have Aai = Bbi.

Input

First line contains the value of integer N.
Second line contains the elements of sequence. A.
Third line contains the value of integer M.
Fourth line contains the elements of the sequence B.

Output

Print one number, the value of F(A, B)

Notes

N and M do not exceed 1000.
The elements in the sequence fit in a 32-bit integer.

Sample Input 0

6
1 2 3 4 5 6
6
2 1 4 3 6 5
Sample Output 0

3
Explanation 0

One possible set a and b with size 3 is : a = {1, 3, 5} and b = {2, 4, 6}, then , {A[a1], A[a2], A[a3]} = {B[b1], B[b2], B[b3]}
*/




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int x,int y)
{
    return x>y ? x : y;
}

int main() 
{
    int l1;
    scanf("%d",&l1);
    int arr[l1], i;
    for(i=1;i<=l1;i++)
        scanf("%d",&arr[i]);
    
    int l2;
    scanf("%d",&l2);
    int brr[l2], j;
    for(j=1;j<=l2;j++)
        scanf("%d",&brr[j]);
    
    int crr[l1+1][l2+1];
    for(i=0;i<=l1;i++)
        for(j=0;j<=l2;j++)
            crr[i][j] = (i==0||j==0) ? 0 : arr[i]==brr[j] ? crr[i-1][j-1]+1 : max(crr[i-1][j],crr[i][j-1]);
    
    printf("%d",crr[l1][l2]);
    
    return 0;
}