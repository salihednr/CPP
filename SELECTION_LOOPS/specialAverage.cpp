/*
Special Average
 
Read integer N Followed By Reading N numbers 
Print
    The average of the numbers in odd positions
    The average of the numbers in even positions
Input
6
10 100 20 200 30 600
Output
20 300

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=1;
    int oddSum=0;
    int evenSum=0;
    int evenCount=0;
    int oddCount=0;
    while(n>=1)
    {
        if(start%2==0)
        {
            int num;
            cin>>num;
            evenSum+=num;
            evenCount++;
        }
        else
        {
            int num;
            cin>>num;
            oddSum+=num;
            oddCount++;
        }
         start++;
         n--;
    }
    cout<<(double)oddSum/oddCount<<" "<<(double)evenSum/evenCount;
    return 0;
}