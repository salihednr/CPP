/*
Concept:-
Pointer Arithmetic
2D Array Vs Pointers

Input/Print 2D Array Without Accessing Array Directly & Using Only 1 For Loop
*/
#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int a[n][m];
	//int *p=&a[0][0]; // int*p=&a[m] only column is mandatory (also while passing 2d array only coloumn is required first box(row) is always optional)
  //inputting 
  for(int *p=&a[0][0];p<=&a[n-1][m-1];p++)
      cin>>*p;
  //printing
  for(int *p=&a[0][0];p<=&a[n-1][m-1];p++)
      cout<<*p<<" ";

	return 0;
}

