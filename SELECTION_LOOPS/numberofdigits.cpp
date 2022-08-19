/*
Number Of Digits including both positive,negative and zero (integers)
*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int digit=0;
    if(num<0)
    num*=-1;
    if(num==0)
    digit+=1;
    while(num>=1)
    {
            digit++;
            num/=10;
    }
    cout<<digit;
    return 0;
}