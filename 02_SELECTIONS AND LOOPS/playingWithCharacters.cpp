/*
input a character check it's type if it is uppercase convert to lower case
lower case then convert to uppercase 
if it is digit print digit
if it is not digit print entered wrong input
*/
#include<iostream>
using namespace std;
 
int main() {
	char a;
    cin>>a;
    cout<<"You have entered:- "<<a<<" is ";
    if(a>='a'&& a<='z')
    {
        cout<<"lowercase\n";
        a=a-'a'+'A';
        cout<<"lowercase is converted to upper case:- "<<a;
    }
    else if(a>='A' && a<='Z')
    {
        cout<<"uppercase\n";
        a=a-'A'+'a';
        cout<<"upper case is converted to lowercase:- "<<a;
    }
    else if(a>=0&&a<=9)
    cout<<"Number";
    else
    cout<<"Characters";
	return 0;
}