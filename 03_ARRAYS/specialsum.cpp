/*
sum of the last row and last coloumn
Sum Of Main Diagonal And Sum Of Off Diagonal
Method -1
This Is The Longest Method Easy Method
when we taking input we can take input of main diagonal,sumoflastraw,sumofcoloumn&off digonal;
so we can simply avoid all repeating for loop
*/
#include <iostream>
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int arrayTwoD[m][n];
    //Taking Input
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>arrayTwoD[i][j];
    //Printing 2D Array
    for(int i=0;i<m;i++)
		{
        for(int j=0;j<n;j++)
			cout<<arrayTwoD[i][j]<<" ";
        cout<<endl;
        }
    int sumLastRow=0;
    int sumLastColoumn=0;
    //sumLastRow
    for(int i=0;i<n;i++)
    {
        sumLastRow+=arrayTwoD[m-1][i];
    }
    //sumLastColoumn
    for(int i=0;i<m;i++)
    {
        sumLastColoumn+=arrayTwoD[i][n-1];
    }
    cout<<"Sum Of Last Row "<<sumLastRow<<endl;
    cout<<"Sum Of Last Coloumn "<<sumLastColoumn<<endl;
    //sum of main diagonal (i==j)
    int sumOfMainDiagonal=0;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(i>=j&&i==j)
            {
                sumOfMainDiagonal+=arrayTwoD[i][j];
                break;
            }
        }
    int sumOfOffDiagonal=0;

    //sum of off diagonal
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
        {
            if((j==(n-i-1)))
            {
                sumOfOffDiagonal+=arrayTwoD[i][n-i-1];
                break;
            }
        }
    
    cout<<"Sum Of Main Diagonal "<<sumOfMainDiagonal<<endl;
    cout<<"Sum Of Off Diagonal "<<sumOfOffDiagonal<<endl;
	return 0;
}