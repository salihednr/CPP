/*
1-N
Sum Using Function
*/
#include<iostream>
using namespace std;
int sumOneToN(int k)
{
    int sum=0;
    for(int i=1;i<=k;i++)
    sum+=i;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int result=sumOneToN(n);
    cout<<result;

    return 0;
}
