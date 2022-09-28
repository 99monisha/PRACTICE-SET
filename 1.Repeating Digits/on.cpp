#include<iostream>
using namespace std;
int main()
{
    int n,rem,seen[10]={0};
 cin>>n;
 while(n>0)
 {
     rem=n%10;
     if(seen[rem]==1)
     break;
     seen[rem]=1;
     n=n/10;
 }
 if(n>0)
 {
     cout<<"Yes";
 }
 else{
     cout<<"No";
 }
 
 return 0;   
}