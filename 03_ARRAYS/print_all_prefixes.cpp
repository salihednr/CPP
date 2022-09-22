/*
Print All Prefixes
input
salih
output
s
sa
sal
sali
salih
*/
#include<iostream>
using namespace std;
int main()
{
  char a[100];
  cin>>a;
  for(int i=0;a[i]!='\0';i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<a[j];
    }
    cout<<endl;
  }
  return 0;
} 
