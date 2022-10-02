/*
Sum of digits that digits untill a single digits

555
6

*/

#include<iostream>
using namespace std;
int sumDigit(int n)
{
    int sum=0;
    while(n>0 || sum>9)
    {
        if(n==0)
        {
            n=sum;
            sum=0;
        }
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumDigit(n);
    return 0;
}