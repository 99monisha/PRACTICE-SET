/*
Check whether a number is an Automorphic number or not
Num: 376, Square: 141376 - is Automorphic
*/

#include <iostream>
using namespace std;

int isAutomorphic(int n){
    int square = n * n;
    while(n != 0)
    {
        if(n % 10 != square % 10){
            return 0;
        }
        n /= 10;
        square /= 10;
    }
    return 1;
}
int main ()
{
    int n = 376, sq = n * n ;
    
    if(isAutomorphic(n))
        cout << "Num: "<< n << ", Square: " << sq << " - is Automorphic";
    else
        cout << "Num: "<< n << ", Square: " << sq << " - is not Automorphic";
    

}
// Time complexity: O(N)
// Space complexity: O(1)