/*
There are N Mice and N holes are placed in a straight line.

Each hole can accomodate only 1 mouse.

A mouse can stay at his position, move one step right from x to x + 1, or move one step left from x to x − 1. Any of these moves consumes 1 minute.

Assign mice to holes so that the time when the last mouse gets inside a hole is minimized.

Input Format

First line contains the integer N. Next line contains N integers, the position of the mice.
Third line contains N integers, the position of the holes.

Constraints

1 <= N <= 105

Output Format

Output one number corresponding to the minimum number of minutes it will take for the last mice to go into the hole.

Sample Input 0

3
4 -4 2
4 0 5
Sample Output 0

4
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int assignHole(int mices[], int holes[],
               int n, int m)
{
    if (n != m)
        return -1;
    sort(mices, mices + n);
    sort(holes, holes + m);
    int max = 0; 
    for(int i = 0; i < n; ++i)
    {
        if (max < abs(mices[i] - holes[i]))
            max = abs(mices[i] - holes[i]);
    }
    return max;
}

int main() 
{ 
    int n;
    cin>>n;
    int mices[n],holes[n],i;
    for(i=0;i<n;i++)
    {
        cin>>mices[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>holes[i];
    }
    int minTime = assignHole(mices, holes, n, n);
  
    cout<< minTime;
  
    return 0; 
}

