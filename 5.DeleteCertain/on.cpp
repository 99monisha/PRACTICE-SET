/*
Delete element in a certain position from an array
5
10 20 30 40 50
Enetr pos:
3
10 20 30 50 
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,pos;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enetr pos:"<<endl;
    cin>>pos;
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}