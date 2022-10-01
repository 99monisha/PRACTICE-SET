/*
Sort First half in Ascending and Second half in descending order 
8
3 2 4 1 10 30 40 20
1 2 3 4 40 30 20 10 
*/

#include<iostream>
using namespace std;
void assdss(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n/2;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        for(j=n/2;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    assdss(a,n);
    return 0;
}