/*
Given 3 Integers Sort them in ascending order and print them

Input
123
132
213
231
312
321
Output
123
123
123
123
123
123
*/


#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    if(a>b)
    {
        temp=a;
        a=b;
        b=a;
    }
    // b is greater than a
    if(b>c)
    {
        temp=c;
        c=b;
        b=temp;
    }
    // c is greater than b
    // but b is changed a so need to cross check with b (previous c)
    if(a>b)
    {
        temp=a;
        a=b;
        b=a;
    }
    //now sorted 

    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) 
    {
        if (a>c)
        {
            if(b>c)
            cout<<c<<b<<a;
            else
            cout<<b<<c<<a;
        }
        else
        cout<<b<<a<<c;
    }
    else if(b>c) // b greater than a b greater than c
    {
        if(c>a)
        cout<<a<<c<<b;
        else
        cout<<c<<a<<b;
    }
    else // b greater than a, c geater than b
    cout<<a<<b<<c;
}

/*
Second Method Swapping 
using swap make a,b,c into a<b<c then print a,b,c

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    // b is greater than a
    if(b>c)
    {
        temp=c;
        c=b;
        b=temp;
    }
    // c is greater than b
    // but b is changed a so need to cross check with b (previous c)
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    cout<<a<<b<<c;
    //now sorted 

    return 0;
}

*/