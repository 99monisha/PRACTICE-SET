/*

Output :
9
*/



#include <bits/stdc++.h>
using namespace std;
int Len(char* str) 
{  
   int count = 0;
   while (*str != '\0'){
      count++;
      str++;
   }
   return count;
}
int main()
{
   char str[] = "PrepInsta";
   cout << Len(str);
   return 0;
}