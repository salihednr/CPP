/*
Digits Frequence
for all the digits from 0-9 find how many times appeared
5 {1,9,34,77,39}
output
0 0
1 1
2 0
3 2
4 1
5 0
6 0
7 2
8 0
9 2
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    int num[10]={0};
    //inputting
    for(int i=0;i<n;i++)
    cin>>array[i];

    for(int i=0;i<n;i++)
    {
        while(array[i]>0)
        {
            num[(array[i])%10]++;
            array[i]/=10;
        }
    }
    for(int i=0;i<10;i++)
    cout<<i<<" "<<num[i]<<endl;
    return 0;
}