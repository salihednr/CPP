/*
Write A Program That Reads And Integer And Print 100 if number is even or 7 if number is odd
8->100
17->7
*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    bool is_even= (num%2==0);
    bool is_odd= (num%2!=0);
    cout<<(is_even*100+is_odd*7);
    return 0;
}