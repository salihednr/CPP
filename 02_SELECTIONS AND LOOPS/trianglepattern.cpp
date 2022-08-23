/*
Read integer N Print Triangle
Input 
1
2
5
Ouput
*
///
*
**
////
*
**
***
*****
******

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int end=1;
    cin>>n;
    while(n>=end)
    {
        int start=1;
        while(start<=end)
        {
            cout<<"*";
            start++;
        }
        cout<<endl;
        end++;
    }
    return 0;
}