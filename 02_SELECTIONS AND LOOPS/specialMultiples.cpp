/*
Read An Integer N Print all numbers that satisfy the following property
    either number is divisible by 6
    or divisible by both 4 & 3
Inclusive 0,That Number
Input
100
Output
0 6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int starts=0;
    cin>>n;
    while(starts<=n)
    {
        if((starts%6==0)||(starts%4==0 && starts%3==0))
        cout<<starts<<" ";
        starts++;
    }
    return 0;
}