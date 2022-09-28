#include<iostream>
using namespace std;
int add_end(int a[],int b[],int n,int freepos,int data)
{
    int i;
    for(i=0;i<n;i++)
    
        b[i]=a[i];
        b[freepos]=data;
        freepos++;
        
        
    
    return freepos;
    
}
int main()
{
     int a[4];
    int n,i,freepos;
    cin>>n;
   
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int size=sizeof(a)/sizeof(a[0]);
    freepos=n;
    if(n==size)
    {
        int b[size+2];
        freepos=add_end(a,b,size,freepos,65);
        for(i=0;i<freepos;i++)
        {
            cout<<b[i]<<" ";
        }
    }
    return 0;
}