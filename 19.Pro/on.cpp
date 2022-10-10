/*

 Sum of N Natural Numbers
Enter a number : 10
55
*/

#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : "; 
    cin >> n;
    int sum=0;
    for(int i=1;i<=n;i++) 
        sum+=i;
    cout << sum;
    return 0;
}