/*
Sort Array And Find Missing Number
1-N array Is given one number is missing find it
*/
#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(int A[], int sizeOfArray) {
    sort(A,A+sizeOfArray);
    int num;
    for(int i=0;i<sizeOfArray;i++)
        if((i+1)!=A[i])
            {
                num=i+1;
                break;
            }
    return num;
}
int main()
{
    int A[]={1,6,2,3,4,5,9,8,7,11};
    int sizeOfArray=sizeof(A)/sizeof(int);
    cout<<findMissingNumber(A,sizeOfArray);
    return 0;
}