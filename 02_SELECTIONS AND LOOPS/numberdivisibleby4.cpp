/*
Read an Integer X 
Find all the numbers divisible by 4 from 1-X
Input
18
20
Output
4,8,12,16
4,8,12,16,20

*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int print=1;
    while(num>=print)
    {
        if(print%4==0)12
        cout<<print<<endl;
        print++;
    }
    return 0;
}