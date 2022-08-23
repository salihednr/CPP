#include<iostream>
using namespace std;
int main()
{
    string val;
    cin>>val;
    for(int i=0;i<val.size();i++)
    {
        cout<<val[i];
        if(val[i]!=val[i+1])
        cout<<" ";
    }
    return 0;
}