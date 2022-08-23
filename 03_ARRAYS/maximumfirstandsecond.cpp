/*
read Array[n]
find maximum and 2nd last maximum values
input
4 {1,2,3,4}

3{-10,-20,0}
output
4
3

0
-10

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
    int max1=name[0];
    for(int i=0;i<N;i++)
    {
        if(name[i]>max1)
        max1=name[i];
        
    }
    int max2=name[0];
    for(int i=0;i<N;i++)
    {
        if(name[i]>max2 && (name[i]!=max1))
        max2=name[i];
    }
    cout<<max1<<endl;
    cout<<max2<<endl;
    return 0;
}