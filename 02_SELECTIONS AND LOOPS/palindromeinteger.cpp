/*
Palindrome Integer
Reverse Integer Number and Compare
Input
1635
111
636
987
Output
0
1
1
0
*/
#include<iostream>
using namespace std;
int main()
{
    
  //Reverse Integer
  int n;
  int reverse=0;
  cin>>n;
  int nClone=n;
  while(n!=0)
  {
    reverse=n%10+(reverse*10);
    n/=10;
  }
  cout<<reverse<<endl;

  //Compare
    cout<<(reverse==nClone);
   return 0;
}