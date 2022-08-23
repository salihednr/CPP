/*
Find The Minimum And Maximum Value In An Array
and swap it minum value to maximum maximum value to minimum
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    cin>>num[i];
    int min=num[0];
    int max=num[0];
    int min_ind=0;
    int max_ind=0;
    for(int i=0;i<n;i++)
    {
        if(min>num[i])
        min=num[i],min_ind=i;
        if(max<num[i])
        max=num[i],max_ind=i;
    }
    num[min_ind]=max;
    num[max_ind]=min;

    for(int i=0;i<n;i++)
    cout<<num[i]<<" ";
    return 0;
}