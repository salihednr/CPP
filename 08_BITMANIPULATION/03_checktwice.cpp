/*
Given An Array Of Numbers Where All Elements Occur An Even Number Of Times Except One Number, Find The Odd Occuring Number ?
1)
9
A={1,2,3,7,5,2,1,3,5}
7
*/
#include<iostream>
using namespace std;
int main()
{
    int n,xorOne=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        xorOne=xorOne^a[i];
    cout<<xorOne;
    return 0;
}
