/*
Recursive Function
*****
****
***
**
*
*/
#include<iostream>
using namespace std;
void star(int n)
{
    if(n==0)
        return; //Base Case Stops Here (Baseline)
    for(int i=0;i<n;i++)
    cout<<"*";
    cout<<"\n";
    star(n-1);

}
int main()
{
    int f;
    cin>>f;
    star(f);
    return 0;
}