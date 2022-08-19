/*
Read integer N Print Triangle (Upside Down)
Input 
1
2
5
Ouput
*
///
**
*
////
*****
****
***
**
*

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>=1)
    {
        int start=n;
        while(start>=1)
        {
            cout<<"*";
            start--;
        }
        cout<<endl;
        n--;
    }
    return 0;
}