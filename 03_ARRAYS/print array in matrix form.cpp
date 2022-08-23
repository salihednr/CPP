/*
2D Array 
Print Given Array In Matrix Form

    int array[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

|1 2 3 4 |
|5 6 7 8 |
|9 10 11 12 |
*/
#include<iostream>
using namespace std;
int main()
{
    int array[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for(int i=0;i<3;i++)
    {
        cout<<"|";
        for(int j=0;j<4;j++)
            cout<<array[i][j]<<" ";
        cout<<"|";
        cout<<"\n";
    }
    return 0;
}