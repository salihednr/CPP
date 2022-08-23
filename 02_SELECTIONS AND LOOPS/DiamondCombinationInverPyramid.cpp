/*
Read an integer and
Print Diomond (2N)

Output
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
    
 Theory
 Use Combination of Pyramid And Inverted Pyramid 
 First Print Pyramid Then Print Inverted Pyramid
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int spaces;
    int raw=1;
    int stars;
    while(n>=raw)
    {
        spaces = n-raw;
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
    raw=1;
    int Nclone=n;
    spaces=raw-1;
    while(Nclone>=raw)
    {
        spaces = raw-1;
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