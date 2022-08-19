/*
4th Digit From The End
607 : 0
8: 0
1600: 1
16999999: 9
*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    cout<<((num/1000)%10);
    return 0;
}