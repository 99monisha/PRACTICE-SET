/*
Insert Element at the end of the array without using any function..
6
1 2 3 4 5 6
7
1 2 3 4 5 6 7
*/
#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int nn;
    cin>>nn;
    a[n]=nn;
    n=n+1;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}