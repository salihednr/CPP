/*
Odd Or Even Using Bitwise & Operator
Logic:
if number is even first bit (0 th bit) is 0
if number is odd first bit (1st bit) is 1
*/
#include<iostream>
using namespace std;
void oddOrEven(int num)
{
    if(num&1)
        cout<<"Odd"<<endl;
    else
        cout<<"Even"<<endl;
}
int main()
{
    int num;
    cin>>num;
    oddOrEven(num);
    return 0;
}
