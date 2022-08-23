/*
Try To Find Even Or Not Using Three Difference Method (Take 3 Input)
1)Using %2
2)Using /2 (Same As Without Remainder (Previous One))
3)Using %10 (Brute Force Approach {Checking Last Digit})

Return 1 for Even 

Eg

Input : - 3,9,10
Output:-
001
*/
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<(num1%2==0);
    cout<<(num2 -2*(num2/2)==0);
    cout<<(num3%10==0||num3%10==2||num3%10==4||num3%10==6||num3%10==8);
    return 0;
}