/*
Reverse Integer Number
Input
1635
Output
5361
*/
#include<iostream>
using namespace std;
int main()
{
    
   int n;
   cin>>n;
   int i=10;
   int reverse=0;
   while(n>0)
   {
    reverse=(reverse*i)+(n%10);
    n=n/10;
   }
   cout<<reverse;

   return 0;
}