/*
Read an integer and do the following
    if number<10000 say this is small number
    otherwise sum the last 3 digits of the number
        if sum is odd say this is great number
        otherwise if sum is even
            if any digit of the last 3 is odd say this is a good number
            otherwise say this is a bad number

Input
1
100009
100008
100037
100128

Ouput
This is small number
This is good number
This is Bad Number
This is good number
This is good number
*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int nClone=N;
    if(N<10000)
    cout<<"This Is Small Number";
    else
    {
        int sum=0;
        sum+=N%10;
        sum+=(N/10,N%10);
        sum+=(N/10,N%10);
        if(sum%2!=0)
        cout<<"This is good number";
        else
        {
            if((nClone%10)%2!=0)
            cout<<"This Is Good Number";
            else
            {
                nClone/=10;
                if((nClone%10)%2!=0)
                cout<<"This Is Good Number";
                else
                {
                nClone/=10;
                if((nClone%10)%2!=0)
                cout<<"This Is Good Number";
                else
                cout<<"This Is Bad Number";
                }

                
            }
        }
        
    }
}