#include<iostream>
using namespace std;
bool isprime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i,lower,uper;
    cout<<"Enter starting and Ending Number: "<<endl;
    cin>>lower>>uper;
    for(i=lower;i<uper;i++)
    {
        if(isprime(i))
        {
            
            cout<<i<<" ";
        }
    }
    return 0;
}