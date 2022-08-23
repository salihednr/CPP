/*
find the position of highest values
*/
#include <iostream>
using namespace std;

int main() {
	int m,n;
    int max;
    int k=0;
    int l=0;
	cin>>m>>n;
	int arrayTwoD[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>arrayTwoD[i][j];
    for(int i=0;i<m;i++)
		{
        for(int j=0;j<n;j++)
			cout<<arrayTwoD[i][j];
        cout<<endl;
        }
    max=arrayTwoD[0][0];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
        {
            if(arrayTwoD[i][j]>max)
            k=i,l=j;
            
        }
        cout<<k<<l;
	return 0;
}