/*
Digit Sum
input a,b,N;
print the summation of numbers between 1 to N whose sum of digits is in between a & b
eg:
input
2
5
20
output
84
(
    numbers whose sum of digis are between 2 and 5 are: 2,3,4,5,10,11,12,13,14,20
    2+3+4+5+10+11+12+13+14+20=84;
)
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,N;
    cin>>a>>b>>N;
    int totalSum=0;
    for(int i=1;i<=N;i++)
    {
        int dup=i;
        int digitSum=0;
        while(dup>0)
        {
            digitSum=digitSum+(dup%10);
            dup/=10;
        }
        if(digitSum>=a && digitSum<=b)
        totalSum+=i;
    }
    cout<<totalSum;
    return 0;
}