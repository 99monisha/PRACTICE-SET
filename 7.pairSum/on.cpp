/*
6
1 2 3 4 5 6
9
4 5

*/

#include<iostream>
using namespace std;
int main()
{
    int i,n,j,key;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    for(i=0;i<n;i++)
    {
       
        if(a[i]+a[i+1]==key)
        {
            cout<<a[i]<<" "<<a[i+1];
        }
       
    }
    return 0;
}