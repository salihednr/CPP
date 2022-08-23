/*
Print Number Of Lower Case In A String
eg:- salIH
output:- 3
*/
#include<iostream>
using namespace std;
int main()
{
    string hello;
    cin>>hello;
    int count=0;
    int value=hello.size();
    for(int i=0;i<value;i++)
    {
        if(hello[i]>='a' && hello[i]<='z')
        count++;
    }
    cout<<count;
    return 0;
}