/*
Concept:-
Pointer Arithmetic
Array Vs Pointers

Input Without Accessing Array Directly
Print Without Index Variable I Using Pointer Arithmetic
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	int *p=a;
//using i(using index variable)
	for(int i=0;i<n;i++)
		cin>>*(a+i);
//printing without using index variable i
	while(p<&a[n])
	{
		cout<<*(p)<<" ";
		p++;
	}
	return 0;
}

