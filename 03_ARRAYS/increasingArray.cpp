/*
Increasing Array
Eg:-
1 2 3 4 8 :- Yes
1 5 7 10:-Yes
1 1 1 1 1:-Yes
1 6 1:-NO
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n];
    int start=1;
    cin>>num[0];
    for(int i=1;i<n;i++)
    {
        cin>>num[i];
        if(num[i]<num[i-1])
        {
            start=0;
            break;
        }
    }
    if(start==0)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}