/*
Linear Search Is Nothing But Simply Comparing All The Elements
This Is Brute Force Approach Checking Elements From The Beginning If We Get The Element Then Stop Else Repeat
It Can Be Used For Both Sorted And Unsorted Arrays
Time Complexity : - O(n)
Space Complexity : - O(1)
*/
#include<iostream>
using namespace std;
int linearSearch(int ar[],int size,int key);
int main()
{
  int n;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++)
    cin>>array[i];
  int key;
  cin>>key;
  int size=sizeof(array)/sizeof(int);
  int index=linearSearch(array,size,key);
  //comparing whether we get index or not
  if(index!=-1)
  {
    cout<<key<<" Is Found At "<<index<<" Index";
  }
  else
  cout<<key<<" Is Not Found At Any Index";
  return 0;
}
//forward declaration
//Linear Search Starts Here It will return the index if it finds the key else it will return -1
int linearSearch(int ar[],int size,int key)
{
    int index=-1;
    for(int i=0;i<size;i++)
    {
        if(ar[i]==key)
            index=i;
    }
    return index;
}
