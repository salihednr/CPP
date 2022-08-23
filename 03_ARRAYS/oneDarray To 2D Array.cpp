/*
Converting 1D Array To 2D Array
m*n==k then only program will work
*/
#include<iostream>
using namespace std;
int main()
{
    //Creating 1D Array
    int k;
    cin>>k;
    int array1D[k];
    for(int i=0;i<k;i++)
        cin>>array1D[i];
    //2D Array
    int m,n;
    int l=0;
    cin>>m>>n;
    int array2D[m][n]={0};
    //converting 1d array to 2d array
    while((m*n)!=k)
    {
        cout<<"Please Enter Proper Input M*N == K"<<endl;
        cin>>m>>n;
    }

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            array2D[i][j]=array1D[l];
            l++;
        }
    //printing 1D Array
    cout<<"1D Array\n";
    for(int i=0;i<k;i++)
    cout<<array1D[i]<<" ";
    //printing 2D Array
    cout<<"\n2D Array\n";
    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<array2D[i][j]<<" ";
            cout<<"\n";
        }
    
    return 0;
}