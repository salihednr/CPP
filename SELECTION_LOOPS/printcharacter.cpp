/*
Inupt Number And Character Print Like Given Below
Input
3#
5*
2Y
Ouput
3###
5*****
2YY
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char m;
    cin>>m;
    cout<<n;
    while(n>0)
    {
        cout<<m;
        n--;
    }
    return 0;
}