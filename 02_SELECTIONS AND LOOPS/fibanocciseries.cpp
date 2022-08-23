/*
Fibonacci Sequence
Math Sequence
First 0 1
then each term is sum of last two terms
0 1 1 2 3 5 8 13 21 34
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int n1=0;
    int n2=1;
    cout<<n1<<" "<<n2;
    int num3;
    for(int i=2;i<n;++i)
    {
       num3=n2+n1;
       cout<<" "<<num3;
       n1=n2;
       n2=num3;
    }
    return 0;
}
