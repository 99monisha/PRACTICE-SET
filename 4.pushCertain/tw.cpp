/*
Insert Element in the certain position

Eneter the number of array size: 
4
Eneter the array element: 
1 2 3 5
Enter the Position and Number:
3 4
The Final Array is:  
1 2 3 4 5 

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,pos;
    cout<<"Eneter the number of array size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Eneter the array element: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<" Enter the Position and Number:"<<endl;
    cin>>pos>>n;
    if(pos<=n && pos>=0)
    {
        for(i=n;i>pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=n;
    }
    cout<<"The Final Array is: "<<" "<<endl;
    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}