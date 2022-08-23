/*
Find The Minimum And Maximum Value In An Array
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
    for(int i=0;i<n;i++)
    {
        if(min>num[i])
        min=num[i];
        if(max<num[i])
        max=num[i];
    }
    cout<<"Maximum Value Is "<<max<<"\nMinimum Value Is "<<min;
    return 0;
}