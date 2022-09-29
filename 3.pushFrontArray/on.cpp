#include<iostream>
using namespace std;
int add_front(int a[],int n,int data)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
       a[i+1]=a[i];
    }
    a[0]=data;
    return n+1;
}
int main()
{
    int n,i,data=8;
    cout<<"Enter the number of element: "<<" "<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    n=add_front(a,n,data);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}