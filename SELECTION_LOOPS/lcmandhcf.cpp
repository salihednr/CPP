/*
Write A Program To Take Input A 2 number and find their LCM & HCF

Note
LCM(a,b)*HCF(a,b)=a*b
LCM(a,b)>=max(a,b)   LCM(a,b)<=A*B if A & B both are Co primes Then A*B Is The LCM
HCF(a,b)<=min(a,b) HCF(a,b)>=1
Find HCF Then Use Equation

Eg
Input
8 10
Output
HCF is 2
LCM is 40
*/
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,min;
    cin>>num1>>num2;
    //Finding The Minimum 2 Of Two Number
    if(num1>=num2)
    min=num2;
    else
    min=num1;
    int HCF=1;
    for(int i=1;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
        HCF=i;
    }
    cout<<"HCF is:- "<<HCF;
    cout<<"LCM is:- "<<((num1*num2)/HCF);
    return 0;
}