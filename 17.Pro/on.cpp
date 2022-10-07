/*

Print N-bit binary numbers having more 1’s than 0’s in all prefixes

1111 1110 1101 1100 1011 1010
*/

#include <bits/stdc++.h>
using namespace std;

void printRec(string number, int extraOnes,int remainingPlaces)
{
   if (remainingPlaces==0) {
     cout << number << " "; return; 
   } 
   printRec(number + "1", extraOnes + 1, remainingPlaces - 1);

   if (extraOnes > 0) 
   printRec(number + "0", extraOnes - 1,remainingPlaces - 1);
   
}

int main()
{
   int n = 4;

   string str = ""; 
   printRec(str, 0, n);

   return 0;
}