/*
Write A Program That Read 6 Integer And Compare Them Using Function
*/
#include<iostream>
using namespace std;
int max(int n1,int n2,int n3,int n4,int n5,int n6)
{
	int max=n1;

	if(n2>max)
	max=n2;
	if(n3>max)
	max=n3;
	if(n4>max)
	max=n4;
	if(n5>max)
	max=n5;
	if(n6>max)
	max=n6;

	return max;
}
int main()
{
	int n1,n2,n3,n4,n5,n6;
	cin>>n1>>n2>>n3>>n4>>n5>>n6;
	cout<<max(n1,n2,n3,n4,n5,n6);
	return 0;
}