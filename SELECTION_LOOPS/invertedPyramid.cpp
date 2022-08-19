/*
Read an integer and
Print Inverted Pyramid
Input 
5
Output
*********
 *******
  *****
   ***
    *
Theory

0 spaces in first row 9 star
1 spaces in second row 7 star
2 spaces in third row 5 star
3 spaces in fourth row 3 star
4 spaces in fifth raw 1 star

(row-1) Spaces 2*N-1 stars

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
    int nClone=n;

    while(nClone>=raw)
    {
        spaces=raw-1;
        stars=2*n-1;
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
        n--;
    }
    return 0;
}