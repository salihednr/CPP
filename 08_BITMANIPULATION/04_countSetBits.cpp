/*
Count Set Bits
Logic:
(1010)2=10
set bits = 2;
*/
#include<iostream>
using namespace std;
int countSetBit(int num)
{
    int countBits=0;
    while (num>0)
    {
        if(num&1)
            countBits++;
        num=num>>1;
    }
    return countBits;
}
int main()
{
    int num;
    cin>>num;
    cout<<countSetBit(num)<<endl;
    return 0;
}
