/*
Write A Program That Reads 2 Positive Integers n,m And Print 
Such Reminder Without Using The Modulus Operator

17%12=5
Do it without modulus operator

Concept
Mathematical Equation
(n-m((n/m)))
n/m = integer by integer so avoid fraction
mulitplying with m will give perfect multiplication possible so far
subtracting with n will give remainder
Simple Mathematics Concepts
*/

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<n-m*(n/m);
    return 0;
}