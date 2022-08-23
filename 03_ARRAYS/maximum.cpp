/*
read N
read array[N]
find maximum value
*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int name[N];
    for(int i=0;i<N;i++)
    cin>>name[i];
    int max=name[1];
    for(int i=0;i<N;i++)
    if(name[i]>max)
    max=name[i];
    return 0;
}