/*
Binary Search Is Optimised Method To Search
This is dividing /2 upto we get the element 
It Can Be Used For Sort Arrays Onlye
Arrays Can Be distinct or non distinct but it must be sorted
Time Complexity : - O(logn)
Space Complexity : - O(1) (Same As Linear Search)
*/
#include<iostream>
using namespace std;
int binarySearch(int ar[],int size,int key);
int main()
{
  int n;
  cin>>n;
  int array[n];
  int key;
  cin>>key;
  for(int i=0;i<n;i++)
    cin>>array[i];
  int size=sizeof(array)/sizeof(int);
  int in=binarySearch(array,size,key);
  //comparing whether we get index or not
  if(in!=-1)
  {
    cout<<key<<" Is Found At "<<in<<" Index";
  }
  else
  cout<<key<<" Is Not Found At Any Index";
  return 0;
}
//forward declaration
//Binary Search Starts At Here It will return the index if it finds the key else it will return -1
int binarySearch(int ar[],int size,int key)
{
    int mid;
    int s=0; //starts
    int e=size-1;//end
    while(s<=e)
    {
      mid=((e+s)/2);
      if(key==ar[mid])
      return mid;
      else if(key<ar[mid])
      e=mid-1;
      else if(key>ar[mid])
      s=mid+1;
    }
    return -1;
}
/*
1 2 3

*/
