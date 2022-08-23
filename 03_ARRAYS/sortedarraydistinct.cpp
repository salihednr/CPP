/*
Read array[n]
sorted numbers are given in the order of small to large
remove repeated elements and print only distinct elements in sorted manner
eg 12    1 1 2 2 2 5 5 8
output :- 1 2 5 8

Method -1 Creating New Array And Storing Only Distinct Elements in another duplicate array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n];

    //inputting Numbers;
    for(int i=0;i<n;i++)
    cin>>num[i];

    int numDup[n];
    int check=num[0];
    numDup[0]=check;
    int count=0;
    //checking repeating numbers and avoiding it
    for(int i=1;i<n;i++)
    {
        if(check<num[i])
        {
            count++;
            check=num[i];
            numDup[count]=check;
        }

    }
    //printing
    for(int i=0;i<=count;i++) // using i<=count because count starts from 0 not 1
    cout<<numDup[i]<<" ";
    return 0;
}
*/
//Method -2 using without duplicate array better solution
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n];
    //inputting numbers
    for(int i=0;i<n;i++)
    cin>>num[i];

    cout<<num[0]<<" ";
    for(int i=1;i<n;i++)
    {
        if(num[i]>num[i-1])
        cout<<num[i]<<" ";
    }
    return 0;
}
