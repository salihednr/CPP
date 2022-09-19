/*
Arrays Are By Default Pass By Referance So We Are Passing Array
Function's Parameters Stores Address Of First Variable 
int a[10];
where a stores the address of first variable (&a[0])
*/
#include<iostream>
using namespace std;
//Printing The Integer
void printInt(int *a,int len)
{
  for(int i=0;i<len;i++)
  cout<<a[i]<<" ";
  cout<<endl;
}
//Printing Character Array/String
void printChar(char *b)
{
  cout<<b<<endl;
}
int main()
{
  //Initialising Integer Array
  int a[]={1,2,3};
  //Passing The Integer
  printInt(a,3);
  //Initialising Character Array/String
  char b[]="salih edneer";
  //Passing The Character Array
  printChar(b);
  return 0;
} 
