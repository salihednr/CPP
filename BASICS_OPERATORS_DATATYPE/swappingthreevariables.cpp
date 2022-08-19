/*
Swapping Three Variables Using Single Extra Variable
Just Circulating
Basic Concepts
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int temp=a; // storing a in temporary value
    a=b; // a becomes b
    b=c; // b becomes c
    c=temp; // c becomes a
    cout<<"Value Of A:- "<<a;
    cout<<"\n Value Of B:- "<<b;
    cout<<"\n Value Of C:- "<<c;
}