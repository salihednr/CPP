/*
Read 2 Strings print 1st letter of string b followed by first letter of string b like that...
if there is no elements to print like that remaining characters
Eg:-
1)
salih
edneereee
Output
2)AB
CD
1)
seadlniehereee
ACBD
*/
#include<iostream>
using namespace std;
int main()
{
    string firstValue,secondValue;
    cin>>firstValue>>secondValue;
    int max;
    if(firstValue.size()>secondValue.size())
    max=firstValue.size();
    else
    max=secondValue.size();
    for(int i=0;i<max;i++)
    {
        if(firstValue.size()>i)
        cout<<firstValue[i];
        if(secondValue.size()>i)
        cout<<secondValue[i];
    }
    return 0;
}