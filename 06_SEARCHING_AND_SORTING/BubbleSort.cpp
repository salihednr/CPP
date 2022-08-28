/*
Sorting :- Arranging In The Order Of Increasing/Decreasing Order
Bubble Sort:- Take Larger Element To The End By Repeatedly Swapping The Adjascent Element
Arranging In The Increasing Order
*/
#include<iostream>
using namespace std;
void bubbleSort(int ar[],int size);
int main()
{
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++)
  cin>>ar[i];
  bubbleSort(ar,n);
  for(int i=0;i<n;i++)
  cout<<ar[i]<<" ";
  return 0;
}
void bubbleSort(int ar[],int size)
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
