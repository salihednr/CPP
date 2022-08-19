/*
Read An Integer N, Then Do The Following
If The Number Is Even print last digit of it
if the number is odd do following
    if number <1000 print last 2 digits
    if number >1000 and number <1000000 , print last 4 digits
    otherwise print it's negative value

Input
24
3
337
671819
88888888888

Ouput
4
3
37
1819
-88888888888
*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N%2==0)
    cout<<N%10;
    else
    {
        if(N<1000)
        cout<<N%100;
        else if(N>1000 & N<1000000)
        cout<<N%10000;
        else
        cout<<(-N);
    }
}