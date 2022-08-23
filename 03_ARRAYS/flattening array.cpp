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
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>arrayTwoD[i][j];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			{
				arrayOneD[(i*n)+j]=arrayTwoD[i][j];
			}
	for(int i=0;i<(m*n);i++)
	cout<<arrayOneD[i];
	return 0;
}