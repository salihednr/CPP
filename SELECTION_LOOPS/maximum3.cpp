/*
Maximum of Three Variable
input
1
2
3
ouput
3
*/
#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int max=a;
   if(a<b)
   max=b;
   if(c>b)
   max=c;
   cout<<max;

}

/*
Second Method

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<a;
    else if(c>a&&c>b)
    cout<<c;
    else
    cout<<b;
    return 0;
}

Thid Method

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<a;
        else
        cout<<c;
    }
    else
    {
        if(b>c)
        cout<<b;
        else
        cout<<c;
    }
    return 0;
}

*/