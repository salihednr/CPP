/*
Principle Of 
Inbuilt Function strcmp 
*/
#include<iostream>
#include<cstring>
using namespace std;
int stringCompare(char a[],char b[])
{
  int returnValue=0;
  for(int i=0;a[i]!=0;i++)
  {
    if(a[i]!=b[i])
     {
      returnValue=a[i]-b[i];
      break;
     }
  }
  if(strlen(a)!=strlen(b) && returnValue!=0)
  {
    return returnValue;
  }
  else if(strlen(a)!=strlen(b) && returnValue==0)
  {
    returnValue=b[strlen(a)];
  }
  return returnValue;
}
int main()
{
  char a[]="salih";
  char b[]="ashwin";
  cout<<"Using My Own Function:- "<<stringCompare(a,b)<<endl;
  cout<<"Using Inbuilt Function:- "<<strcmp(a,b)<<endl;
  return 0;
} 
