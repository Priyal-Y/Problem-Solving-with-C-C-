/*Given an array of N integers, your task is to print the highest possible product by multiplying any three numbers from the array.

Input Format

First line contains an integer N.
Next line contains N space separated integers.

Constraints

1 <= N <= 106
0 <= |Ai| <= 103

Output Format

Output one numbers, the maximum product.

Sample Input 0

6
0 -1 3 100 70 50
Sample Output 0

350000*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int c=0;
    int max=-999,max2=-999;
    for(int i=n-1;i>=0;i--)
    {
        if(c==3)
            break;
        c++;
        if(max==-999)
            max=arr[i];
        else
            max*=arr[i];
    }
    c=0;
    for(int i=0;i<=n;i++)
    {
        if(c==3)
            break;
        c++;
        if(max2==-999)
            max2=arr[i];
        else
            max2*=arr[i];
    }
    cout<<(max>max2?max:max2);
    return 0;
}
