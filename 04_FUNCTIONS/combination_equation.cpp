/*
Find nCr == ( C(n,r) )
nCr= n!/((n-r)!*r!)
*/
#include<iostream>
using namespace std;
int factorial(int x);
int main()
{
	int n;
	int r;
	cin>>n>>r;
	while(r>n)
	{
		cout<<"Please Enter Correct Input\n";
		cin>>n>>r;
	}
	cout<<"C"<<"("<<n<<","<<r<<") :- ";
	cout<<(factorial(n)/(factorial(n-r)*factorial(r)));
}
int factorial(int x)
{
	int fact=1;
	for(int i=x;i>=1;i--)
	fact*=i;
	return fact;
}
