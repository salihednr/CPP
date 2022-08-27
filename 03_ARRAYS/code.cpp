/*
Find The Median Of Sorted Array
*/
#include<bits/stdc++.h>
using namespace std;

double median(int A[], int sizeOfArray) {
    double num;
    if(sizeOfArray%2==0)
    num=(A[sizeOfArray/2-1]+A[sizeOfArray/2])/2.0;
    else
    num=A[sizeOfArray/2];
    return num;
}
int main()
{
    int A[]={1,2,3,4,5};
    int sizeOfArray=sizeof(A)/sizeof(int);
    cout<<median(A,sizeOfArray);
    return 0;
}