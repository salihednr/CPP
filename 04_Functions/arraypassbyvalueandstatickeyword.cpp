/*
Passing Array Via Pass By Value Using Static Keyword
Size Is Know Then Only Possible
*/
#include<iostream>
using namespace std;
int len=0;
void ar(int n,int i)
{
    static int numbers[3];
    numbers[i]=n;
    if(i==(len-1))
    {
        for(int i=0;i<len;i++)
        cout<<numbers[i]<<" ";
    }
}
int main()
{
    int x[]={1,2,3};
    len=sizeof(x)/sizeof(int);
    for(int i=0;i<len;i++)
        ar(x[i],i);

    return 0;
}