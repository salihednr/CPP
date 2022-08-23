/*
Write a program that reads number x then other 5 numbers print 2 values
how many numbers <=x ->K1
how many number>x ->K2

Note That  K1+K2=5;
So only need to find any one of this (use 5-k1/k2 to find other one)

input
10 300 1 5 100 200
output
2 3
*/
#include<iostream>
using namespace std;
int main()
{
    int count,X,num1,num2,num3,num4,num5;
    cin>>X>>num1>>num2>>num3>>num4>>num5;
    count = 0;
    count+=(X>=num1);
    count+=(X>=num2);
    count+=(X>=num3);
    count+=(X>=num4);
    count+=(X>=num5);
    cout<<count<<" "<<5-count;
    return 0;
}

/*
Second Method
#include<iostream>
using namespace std;
int main()
{
    int count1,X,num1,num2,num3,num4,num5,count2;
    cin>>X>>num1>>num2>>num3>>num4>>num5;
    count1=0;
    count2=0;
    if(X>=num1)
    count1++;
    else
    count2++;
    if(X>=num2)
    count1++;
    else
    count2++;
    if(X>=num3)
    count1++;
    else
    count2++;
    if(X>=num3)
    count1++;
    else
    count2++;
    if(X>=num4)
    count1++;
    else
    count2++;
    if(X>=num5)
    count1++;
    else
    count2++;
    cout<<count1<<" "<<count2;
    return 0;
}

*/