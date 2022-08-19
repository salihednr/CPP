/*
Multiplication Table
Read an integer m & n then print NXM multiplication table
Input
6 4
Output

*/
#include<iostream>
using namespace std;
int main()
{
    
    int n,m;
    cin>>n>>m;
    int i=1;
        while(i<=n)
        {
            int j=1;
            while(j<=m)
            {
                cout<<i<<" x "<<j<<" = "<<i*j<<endl;
                j++;
            }
            i++;
        }
    return 0;
}