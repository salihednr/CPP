/*
Set I th Bit
if i th bit is 0 then change to 1
if i th bit is 1 then change to 0
*/
#include<iostream>
void setIthBit(int &num,int i)
{
    int mask=1<<i;
    num=num|mask;
}
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;
    setIthBit(n,i);
    cout<<n;
    return 0;
}
