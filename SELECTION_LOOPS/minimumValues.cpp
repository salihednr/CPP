/*
Minimum Of Values
Input
Read Integer T for number of test case
For each test case read integer N followed by reading N integers
Output
For each test case print the minimum of the N integers

input
2 6 (10 50 20 70 30 4) 3 (10 5 30)
Two test cases
Output
4
5
*/
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int max;
        cin>>max;
        while(n-1)
        {
           int num;
           cin>>num;
           if(num<max)
           max=num;
           n--;
        }
        cout<<max<<endl;

    }
    return 0;
}