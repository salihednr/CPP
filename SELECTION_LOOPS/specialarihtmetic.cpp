/*
Arithmetic
Read 2 Integers Print
    if both odd multiplication
    if both even division(type casting)
    if first is odd second is even A+B
    if first is even second is odd then A-B
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a%2!=0 && b%2!=0)
    cout<<a*b;
    else if(a%2==0 && b%2==0)
    cout<<(double)a/b;
    else if(a%2!=0 && b%2==0)
    cout<<a+b;
    else
    cout<<a-b;
    return 0;
}