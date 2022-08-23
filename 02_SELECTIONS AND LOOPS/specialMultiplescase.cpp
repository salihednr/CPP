/*
Special Mutliples
Read an integer N Print the first N Numbers that are
    multiple of 3 but not multiple of 4
Input
20
Output
3 6 9 15 18 21 27 30 33 39 42 45 51 54 57 63 66 69 75 78
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin>>n;
    int k=3;
    while(n!=count)
    {
        if(k%3==0 && k%4!=0)
        {
            cout<<k<<" ";
            count++;
        }
        k+=3;
    }
    return 0;
}