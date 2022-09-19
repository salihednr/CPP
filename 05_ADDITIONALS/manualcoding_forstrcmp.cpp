/*
Principle Of 
Inbuilt Function strcmp 
How strcmp Works ?
strcmp will either return 0 or non zero value if it is zero then they are of same type
if it is non zero then they are of not same type
+ve means first string comes lower order(dictionary order) than second string
-ve means second string comes higher order (dictionary order) than second string
it just takes each letter and compare whether a[i]-b[i]==0 that is how it works if it is not zero
then it returns a[i]-b[i]
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
