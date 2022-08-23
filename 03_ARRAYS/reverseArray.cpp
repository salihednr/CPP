/*
Reverse Array Method Using Duplicate Array

#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int name[N];
    for(int i=0;i<N;i++)
    cin>>name[i];
    int dup[N];
    for(int i=N-1;i>=0;i--)
    dup[i]=name[N-i-1];
    for(int i=0;i<N;i++)
    cout<<dup[i];
    return 0;
}
*/
//Reverse Array Without Duplicate Array(Swaping)
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int name[N];
    for(int i=0;i<N;i++)
    cin>>name[i];
    for(int i=0;i<N;i++)
    {
        int temp=name[i];
        name[i]=name[N-i-1];
        name[N-i-1]=name[i];
    }
    for(int i=0;i<N;i++)
    cout<<name[i];
    return 0;
}