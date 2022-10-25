/*
Permutations in which n people can occupy r seats in a classroom
Enter number of people: 5
Enter number of seats: 9
Total possible arrangements: 120

*/

#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=num; i>=1 ;i--)
        fact*=i;
    return fact;
}
int main()
{
    int n,r;
    cout<<"Enter number of people: ";
    cin>>n;
    cout<<"Enter number of seats: ";
    cin>>r;
    int p = factorial(n)/factorial(n-r);
    printf("Total possible arrangements: %d",p);
    return 0;
}