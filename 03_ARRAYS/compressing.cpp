/*
compressing
ccccDDDxxxxxxxxe => c4_D3_x8_e1
xxxxxxxx =>x8
*/
#include<iostream>
using namespace std;
int main()
{
    string val;
    cin>>val;
    int x=1;
    int count=0;
    val[val.size()]='\0';
    for(int i=0;i<val.size();i++)
    {
        if(val[i]==val[i+1])
        count++;
        if(val[i]!=val[i+1])
        {
            cout<<val[i]<<(count+1);
            count=0;
            if(x!=1&&val[i+1]!='\0')
            {
                 cout<<"_";
            }
        }
        x=3;
    }
    return 0;
}