/*
Read an integer and
Print
Input 
5
Output
    *
   ***
  *****
 *******
*********

Theory

4 spaces in first row 1 star
3 spaces in second row 3 star
2 spaces in third row 5 star
1 spaces in fourth row 7 star
0 spaces in fith row 9 star
(N - row) Spaces 2*row+1 stars

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int raw=1;
    int spaces;
    int stars;

    while(n>=raw)
    {
        spaces=n-raw;
        stars=2*raw-1;
        while(spaces>=1)
        {
            cout<<" ";
            spaces--;
        }
        while(stars>=1)
        {
            cout<<"*";
            stars--;
        }
        cout<<endl;
        raw++;
    }
    return 0;
}