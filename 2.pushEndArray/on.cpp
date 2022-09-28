#include<iostream>
using namespace std;
int add_end(int a[],int freepos,int data)
{
    a[freepos]=data;
    freepos++;
    return freepos;
}
int main()
{
    int n,i,freepos;
    cin>>n;int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    freepos=n;
    freepos=add_end(a,freepos,65);
    for(i=0;i<freepos;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
