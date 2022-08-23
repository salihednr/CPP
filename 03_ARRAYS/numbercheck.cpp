//Search for a number in array print it's index if no such element print -1
#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cin>>n>>num;
    int array[n];
    //inputting
    for(int i=0;i<n;i++)
    cin>>array[i];

    int count=-1;
    for(int i=0;i<n;i++)
    {
        if(array[i]==num)
        count=i;
    }
    cout<<count;
    return 0;
}