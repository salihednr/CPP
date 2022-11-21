/*
Get Ith Bit
10 = 1010
0 -> 0
1 -> 1
2 -> 0
3 -> 1
*/
#include<iostream>
using namespace std;
void getIthBit(int num,int i)
{
    int mask=1<<i;
    if((num&mask)>0)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}
void getIthBit2(int num,int i)
{
    num=num>>i;
    if(num&1)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}
int main()
{
    int num,i;
    cin>>num>>i;
    getIthBit(num,i);
    getIthBit2(num,i);
    return 0;
}
