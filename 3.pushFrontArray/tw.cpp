/*
Insert element at the begining of the array when arry is not full

Enter the number of element:  
5
1 2 3 4 5
8 1 2 3 4 5 

*/

#include<iostream>
using namespace std;
int add_front(int a[],int b[],int size,int freepos,int data)
{
    int i,n;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    b[freepos]=data;
    freepos++;
    return freepos;
}
int main()
{
    int n,i,size,freepos,data=9;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==size)
    {
       int b[size+2];
        freepos=add_front(a,b,size,freepos,data);
        for(i=0;i<freepos;i++)
        {
            cout<<b[i];
        }
       
    }
   
    
    return 0;
}