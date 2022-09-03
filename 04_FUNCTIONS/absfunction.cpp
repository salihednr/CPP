/*
Maximum Of Absolute 2 Numbers
Method -1 Using Without Function
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<0)
    a*=-1;
    if(b<0)
    b*=-1;
    if(a>b)
    cout<<a;
    else
    cout<<b;
    return 0;
}
Method -2 With Function 
Calling ourMax From Main Function Then Calling ourAbs From ourMax Function
#include<iostream>
using namespace std;
int ourMax(int m,int n);
int ourAbs(int k);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<ourMax(a,b);
    return 0;
}
int ourMax(int m,int n)
{
    int a=ourAbs(m);
    int b=ourAbs(n);
    if(a>b)
        return a;
    return b;
}
int ourAbs(int k)
{
    if(k>0)
        return k;
    return -k;
}
method -3
Calling All Functions From Main Functions Itself
*/
#include<iostream>
using namespace std;
int ourMax(int m,int n);
int ourAbs(int k);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<ourMax(ourAbs(a),ourAbs(b));
    return 0;
}
int ourMax(int m,int n)
{
    if(m>n)
        return m;
    return n;
}
int ourAbs(int k)
{
    if(k>0)
        return k;
    return -k;
}