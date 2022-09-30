/*
Non repeating Numbers in array


*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count;
    cout<<"Enter the Number of element:"<<endl;
    cin>>n;
    int a[n];
    cout<<" Enter the elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int visit[n];
    for(i=0;i<n;i++)
    {
        if(visit[i]!=1)
        {
            count=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    visit[j]=1;
                }
            }
            if(count==1)
            {
                cout<<"The non repeating numbers are: "<<a[i]<<" "<<endl;
            }
        }
    }
    
    return 0;
}