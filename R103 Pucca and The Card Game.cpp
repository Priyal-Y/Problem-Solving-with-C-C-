/*
Pucca and Garu are playing a card game that is explained as follows :
1. N number of cards are placed in a straight line.
2. Cards are numbered 1 to N from left to right and the ith card has a number Ai written on it.
3. Pucca plays first, then Garu, then Pucca and so on.
4. In each turn a player can choose one card, either the rightmost card or the leftmost card.
5. Whatever card a player chooses, the number on that card is added to the players score and the card is removed from the game.
6. The game ends when there are no other cards to pick.
7. At the end of the game, the player with the maxmimum score wins.
8. If both players have equal scores, then Pucca wins.

Pucca and Garu are feeling lazy on this sunday afternoon and have asked you to write a program to determine who the winner of the game will be.

INPUT

First line contains the number of cards N. (1 <= N <= 105)
Second line contains N space separated integers, ith of them denoting Ai. (1 <= Ai <= 106)

OUTPUT

Print "Pucca" (without quotes) if Pucca wins or "Garu" (without quotes) if Garu wins.

Sample Input 0

5
9 3 7 4 8
Sample Output 0

Pucca
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     long long int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=n-1;
    int k=1;
    int b[2]={0};
    while(i<=j){
        if(k==1)
            k=0;
        else
            k=1;
        if(a[i]<a[j]){
            b[k]+=a[j];
            j--;
        }
        else
        {
           b[k]+=a[i];
            i++;
        }
    }
    if(b[0]>=b[1]){
        cout<<"Pucca";
    }
    else
        cout<<"Garu";
    return 0;
}
