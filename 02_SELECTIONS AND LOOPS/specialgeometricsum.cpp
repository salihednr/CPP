/*
Special Sum
Read Integer t for test cases
read n then read n integers compute
like this (a,b*b,c*c*c,......)
Input 
1
3  (5 7 2)

Ouput
62   (5 + 7*7 + 2*2*2)
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
        int j=1;
        int sum=0;
        while(n--)
        {
            int pow=1;
            int i=j;
            int num;
            cin>>num;
            while(i--)
                pow*=num;

            sum+=pow;
            j++;
        }
        cout<<sum;
    }
    return 0;
}