/*
Write A Program That Reverse String Using Function
*/
#include<iostream>
using namespace std;
string reverseStr(const string &str)
{
	string rev;
	rev=str;
	for(int i=0;i<(str.size());i++)
	{
		rev[i]=str[str.size()-i-1];
	}
	return rev;
}
int main()
{
	string name;
	cin>>name;
	cout<<reverseStr(name);
	return 0;
}
//salih