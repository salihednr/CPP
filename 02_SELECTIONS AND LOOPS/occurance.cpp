/*
Finding the occurance of integer
Input
33333 0
33333 3
1234565 5
Ouput
0
5
2
*/
#include<iostream>
using namespace std;
int main()
{
    int num,occ;
    cin>>num;
    cin>>occ;
    int count=0;
    while(num>0)
    {
        if((num%10)==occ)
        count++;
        num/=10;
    }
    cout<<count;
    return 0;
}
