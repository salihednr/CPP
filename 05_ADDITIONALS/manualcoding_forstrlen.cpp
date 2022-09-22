#include<iostream>
#include<cstring>
using namespace std;
int strlength(char *str)
{
  int i=0;
  for(i=0;str[i]!='\0';i++)
  {}
  return i;
}
int main()
{
  char str[100];
  cin.getline(str,100);
  cout<<"String/Character Array :- "<<str<<"\n";
  cout<<"Length Using cstring Library :- "<<strlen(str)<<"\n";
  cout<<"Length Using Our Own Library :- "<<strlength(str);
  return 0;
} 
