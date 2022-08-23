/*
1st Method
Swapping Two variables with another temporary variable
Basics
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int temp;
    cin>>a;
    cin>>b;
    temp = a;
    a=b;
    b=temp;
    cout<<a<<b;
    return 0;
}
*/



/*
2nd Method
Swapping Two Variables Without Variables
Basics Mathematics Logic
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    a=a+b; // a becomes a+b
    b=a-b; // b becomes a (a+b - b = a)
    a=a-b; // b is a substracting b(a) from a+b will give b (a+b - a = b) so a becomes 
    cout<<a<<b;
    return 0;
}