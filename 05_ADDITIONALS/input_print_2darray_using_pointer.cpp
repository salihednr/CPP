/*
Concept:-
Pointer Arithmetic
2D Array Vs Pointers

Input 2D Array Without Accessing Array Directly
*/
#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int a[n][m];
	//int *p=&a[0][0]; // int*p=&a[m] only column is mandatory (also while passing 2d array only coloumn is required first box(row) is always optional)
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>*(*(a+i)+j);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
      cout<<*(*(a+i)+j)<<" ";
    cout<<"\n";
  }
	return 0;
}

