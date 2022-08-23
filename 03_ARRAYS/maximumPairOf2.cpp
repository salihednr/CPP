/*
read Array[n]
find maximum pair
input
4 {1,2,3,4}

3{-10,-20,0}
output
7

-10

hint
maximum pair=maximum and second last maximum value
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
    cout<<max1+max2;
    return 0;
}