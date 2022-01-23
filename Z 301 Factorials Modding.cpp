/*
Given 3 numbers, a,b and m, find (a! / b!) % m, where a! is factorial of a, i.e a x (a-1) x (a-2) ... x 1 and a % b is the mod function. which is the remainder when a is divided by b.

Input Format

Three numbers : a, b and m.

Constraints

1 <= b <= a <= 10 ^ 9

1 <= m <= 10 ^ 9

(b - a) <= 10 ^ 5

Output Format

Print only one number, equal to (a! / b!) % m.

Sample Input

5 2 7

Sample Output

4

Explanation

5! = 120
2! = 2
120 / 2 = 60
60 % 7 = 4
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,m;
    long ans=1;
    cin>>a>>b>>m;
    for(int i=b+1;i<=a;i++)
    {
        ans=ans*i%m;
    }
    cout<<ans%m;
    return 0;
}