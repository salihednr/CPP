/*
Swapping Of Two Numbers Using XOR
a=a^b (a becomes a^b)
b=a^b (b becomes a (a^b^b=a))
a=a^b (a becomes b (a^b^a)=b)
*/
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Before Swapping 1:"<<num1<<endl;
    cout<<"Before Swapping 2:"<<num2<<endl;
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    cout<<"After Swapping 1:"<<num1<<endl;
    cout<<"After Swapping 2:"<<num2<<endl;
    return 0;
}
