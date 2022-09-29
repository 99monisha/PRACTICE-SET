/*
Insert element at the certain position 

Enter the position:
3
Enetr the element you want: 
6
4 9 87 6 8 6 

*/ 
#include <iostream>
#define size 5
using namespace std;

int main() {
    int a[size]={4,9,87,8,6};
    int pos,i,element;
    cout<<"Enter the position:"<<endl;
    cin>>pos;
    cout<<"Enetr the element you want: "<<endl;
    cin>>element;
    if(pos<=size && pos>=0)
    {
        for(i=size;i>pos;i--)
        a[i]=a[i-1];
        a[pos]=element;
        for(i=0;i<element;i++)
        
            cout<<a[i]<<" ";
        }
        else
        cout<<"Invalid position";
    

    return 0;
}