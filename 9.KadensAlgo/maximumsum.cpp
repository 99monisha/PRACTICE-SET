/*
6
2 2 2 2 2 -5
The maxium sum is: 10
*/

#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxsum=INT_MIN;
    int currentsum=0;
    for(i=0;i<n;i++)
    {
        currentsum+=a[i];
        while(currentsum<0)
        {
            currentsum=0;
        }
        
       maxsum=max(maxsum,currentsum); 
    }
    cout<<"The maxium sum is: "<<maxsum;
    return 0;
}