/*
Recursive Function
Print Factorial Using Recursive Function
*/
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    return fact(n-1)*n;
}
int main()
{
    int f;
    cin>>f;
    cout<<fact(f);
    return 0;
}