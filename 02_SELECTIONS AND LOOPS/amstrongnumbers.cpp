/*
Amstrong Number 
Problem -1 (3 Digit)
Amstrong Number
ab=a^2+b^2;
a=a;
abc=a^3+b^3+c^3;
abcd=a^4+b^4+c^4+d^4;
Analysis
All One Digit Numbers Are Amstrong

*/

/* 
3 Digit Number
#include<iostream>
using namespace std;
int amstrong(int am);
int main()
{
    int n;
    cin>>n;
    if(amstrong(n)==n)
        cout<<"Given Number Is Amstrong";
    else
        cout<<"Given Number Is Not Amstrong";
    return 0;
}
int amstrong(int am)
{
    int sum=0;
    while(am!=0)
    {
        int rem=am%10;
        am/=10;
        sum+=(rem*rem*rem);
    }
    return sum;
} */
#include<iostream>
using namespace std;
int findDigit(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}
int findAmstrong(int num,int digit)
{
    int sum=0;
    while(num!=0)
    {
        int lastDigit=num%10;
        num/=10;
        int pow=1;
        for(int i=1;i<=digit;i++)
        {
            pow*=lastDigit;
        }
        sum+=pow;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    while(n<=0)
    {
        cout<<"Enter Correct Number Amstrong Numbers Can't Be Negative Or 0, Amstrong Number Is Only Defined For Positive Number"<<endl;
        cin>>n;
    }
    int digit=findDigit(n);
    if(n==findAmstrong(n,digit))
        cout<<"Give Number Is Amstrong";
    else
        cout<<"Given Number Is Not Amstrong";
    return 0;
}
