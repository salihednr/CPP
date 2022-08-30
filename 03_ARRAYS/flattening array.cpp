/*
Converting 2D Array Into 1D Array
*/
#include <iostream>
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int arrayTwoD[m][n];
	int arrayOneD[m*n];
	//taking input
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>arrayTwoD[i][j];
	//Flattening 2D Array To One D Array (Storing 2D Array Values In 1D Array)
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			{
				arrayOneD[(i*n)+j]=arrayTwoD[i][j];
			}
	//printing array
	for(int i=0;i<(m*n);i++)
	cout<<arrayOneD[i];
	return 0;
}
