/*
Sum Of Last 3 Digits
Using Comma Operator,Compound Operator

607 : 13
8: 8
16: 7
*/
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cin>>num;
    sum+=num%10;
    sum+=(num/=10,num%10);
    sum+=(num/=10,num%10);
    cout<<sum;
    return 0;
}