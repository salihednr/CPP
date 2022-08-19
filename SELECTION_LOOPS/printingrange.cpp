/*
Print all the inetgers between X & Y
X<=Y (Inclusive)
Input 5 10
Ouput
5
6
7
8
9
10
*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    while(x<=y)
    {
        cout<<x<<endl;
        x++;
    }

    return 0;
}