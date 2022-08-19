/*
Sum of N Numbers
without formula
sum of natural numbers formula == (n(n+1))/2
sum of odd numbers == n^2 == n*n
sum of even numbers == n(n+1)
sum of AP == n/2(Xn+X1) == n/2(2A + (n-1)d) (A=x1)
*/
#include<iostream>
using namespace std;
int main()
{
    int num,sum;
    sum=0;
    cin>>num;
    while(num>=1)
    {
        sum+=num;
        num--;
    }
    cout<<sum;
    return 0;
}