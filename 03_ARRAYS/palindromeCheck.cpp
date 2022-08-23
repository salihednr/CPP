/*
Check Palindrome Of An Array
{1,1,1}-Yes
{11,12,11}-Yes
{1,2,3,4,5,5,4,3,2,1} - Yes
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    //inputting 
    for(int i=0;i<n;i++)
    cin>>array[i];
    bool palindrome=true;
    //checking palindrome
    for(int i=0;i<n;i++)    
        if(!(array[i]==array[n-i-1]))
        {
            palindrome=false;
            break;
        }
    //Printing Array
    for(int i=0;i<n;i++)
    cout<<array[i]<<" ";
    //palidnrome printing
    if(palindrome)
    cout<<"Given Array Is Palindrome";
    else
    cout<<"Given Array Is Not Palindrome";
    return 0;
}