/*
Occurrence of a digit in a given number
3
*/


#include <iostream>
using namespace std;
int main() {

    int n = 890190798; 
    int d = 9; 

    int count=0; 

    while(n) {

        int rem = n%10; 
        if(rem == d){
            count++;
        }
        n=n/10; 
    }

    cout<<count;

    return 0;

}