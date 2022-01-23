
/*
Given an array of integers, replace every element with the greatest element on the right side in the array. Replace last element with 0 as there no element on the right side of it.

Input Format

First line contains N , the number of Numbers. Next line contains N integers a[1]..a[n] the numbers

Constraints

1<= N <= 10^5
1<= ai <= 10^5

Output Format

Print the array required

Sample Input 0

6
6 7 4 3 5 2
Sample Output 0

7 5 5 5 2 0 
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int mx = 0;
    for(int i = n-1; i >= 0; i--){
        int x = arr[i];
        arr[i] = mx;
        mx = max(mx, x);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
    
}