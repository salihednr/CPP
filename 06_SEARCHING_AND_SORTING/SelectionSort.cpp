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
  //inputting array
  for(int i=0;i<n;i++)
  cin>>ar[i];
  //calling selectionsort
  selectionSort(ar,n);
  //printing array
  for(int i=0;i<n;i++)
  cout<<ar[i]<<" ";
  return 0;
}
void selectionSort(int ar[],int n)
{
  for(int pos=0;pos<n-1;pos++)
  {
    int min_position=pos;
    for(int j=pos+1;j<n;j++)
    {
      if(ar[min_position]>ar[j])
      min_position=j;
    }
    swap(ar[pos],ar[min_position]);
  }
}
/*
Alternative Solution For Selection Sort

#include<iostream>
using namespace std;
void selectionSort(int ar[],int size);
int main() // same as previous
{
  int n;
  cin>>n;
  int ar[n];
  //inputting array
  for(int i=0;i<n;i++)
  cin>>ar[i];
  //calling selectionsort
  selectionSort(ar,n);
  //printing array
  for(int i=0;i<n;i++)
  cout<<ar[i]<<" ";
  return 0;
}
void selectionSort(int ar[],int n)
{
  for(int pos=0;pos<n-1;pos++)
    for(int j=pos+1;j<n;j++)
      if(ar[pos]>ar[j])
        swap(ar[pos],ar[j]);
}

*/
