/*
Selection Sort:- Take Smaller Element To The Start By Repeatedly Swapping The Adjascent Element
*/
#include<iostream>
using namespace std;
void selectionSort(int ar[],int size);
int main()
{
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++)
  cin>>ar[i];
  selectionSort(ar,n);
  for(int i=0;i<n;i++)
  cout<<ar[i]<<" ";
  return 0;
}
void selectionSort(int ar[],int size)
{
  for(int times=1;times<=size-1;times++)
  {
    int flag=0;
    //This Loop(Second for loop) Will Work C(N,2) Times without using break and flag using flag will help us to stop loops if array is already sorted reduce steps;
    for(int i=0;i<=size-times-1;i++)
    {
        if(ar[i]>ar[i+1])
        {
          swap(ar[i],ar[i+1]); //inbuilt keyword to swap
          flag=1;
        }
    }
    if(flag==0)
      break;
  }
}
