/*
Find The Most Frequent Number In An Array
array[N]
1 2 1 3 1 5 5
1 repeatedd 3 times : the largest
First Method
assuming no two distinct numbers repeating frequency is not same

Method -1

#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int inputNum[N];
    //inputting Array
    for(int i=0;i<N;i++)
    cin>>inputNum[i];

    int repeatCount[N];
    //Assigning 0 for every count
    //we can simply do like this repeatCount[i]={0} once first element
    //initialised all other elements will become 0 eg repeatcount[i]={1}
    //repeatCount[0]=1 all other elements in arrays are zero
    for(int i=0;i<N;i++)
    repeatCount[i]=0;

    //Checking Frequency
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(inputNum[i]==inputNum[j])
            repeatCount[i]++;
        }
    }

    //finding the maximum numbers index
    int maxInd=0;
    for(int i=0;i<N;i++)
    if(repeatCount[i]>maxInd)
    maxInd=i;

    cout<<inputNum[maxInd];
    return 0;
}
*/

// Method 2
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int inputNum[N];
    //inputting Array
    for(int i=0;i<N;i++)
    cin>>inputNum[i];
    int maxValue=-1,maxRepeat=-1;
    for(int i=0;i<N;i++)
    {
        int count=0;
        for(int j=0;j<N;j++)
            if(inputNum[i]==inputNum[j])
            count++;
        if(maxRepeat==-1||maxRepeat<count)
        maxRepeat=count,maxValue=inputNum[i];
    }
    cout<<maxValue<<" Repeated "<<maxRepeat<<" Times";
    return 0;
}