/*

6
90 45 89 45 76 34
34 45 45 76 89 90
*/

#include<iostream>
using namespace std;
void sorting(int a[],int n)
{
    int i,j;
     for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
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
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sorting(a,n);
  
    return 0;
}