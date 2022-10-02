/*
 calculate the Sum of Digits


Enter the digits:
789
Sum of digit is:
24
*/

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,rem=0;
    cout<<" Enter the digits:"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
        
    }
    cout<<"Sum of digit is:"<<sum;
    return 0;
}