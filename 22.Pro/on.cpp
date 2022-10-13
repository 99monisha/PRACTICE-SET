#include <iostream>
#include <math.h>
using namespace std; 

int getSum(int n){
    
    int sum = 0;
    
    for(int i = 1; i < sqrt(n); i++) { 
if (n % i == 0) { 
 if(i == 1) 
sum = sum + i; 
else if(i == n/i) 
sum = sum + i;
 else 
sum = sum + i + n/i; 
} 
} 
return sum; 
} 
int main() { 
int n = 12; 
int sum = getSum(n); 
if(sum > n) { 
cout << n << " is an Abundant Number\n";
 cout << "The Abundance is: " << (sum-n); 
} else
 cout << n << " is not an Abundant Number\n"; 
}