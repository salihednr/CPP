/*
Vector
Container:- Datastrcuture
STL:- Standard Template Library
Just Like Arrays Vectors Use Contigous Storage Locations
Unlike Arrays Their Size Can Change Dynamically, With Thier
Storage Being Handled Automatically By The Container 
When Vector Exceeds It's Size New Array Would Be Created With The Size Of 2x
And Copy All The Elements And Old Array Will Be Deleted
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  //For Initialisation Capacity Is Same
  vector<int> array={1,2,3,4,5};
  //No Of Elements In Vector
  cout<<array.size()<<endl;
  //Capacity Of Vector
  cout<<array.capacity()<<endl;
  //Size/Capacity Is Same Because We Have Initialised Only Not Updated

  //Push Back Will Add Element To The End Of The Array
  array.push_back(16);
  cout<<array.size()<<endl<<array.capacity()<<endl;
  for(int i=0;i<array.size();i++)
  cout<<array[i]<<" ";
  cout<<endl;
  //Pop Back Will Remove The Last Element
  array.pop_back();
  cout<<array.size()<<endl;
  cout<<array.capacity()<<endl;
  for(int i=0;i<array.size();i++)
  cout<<array[i]<<" ";
  cout<<endl;
  //Fill Contructor:- Fill All The ELements Same
  vector<int> ar(20,0);
  //ar={0,0,0..... Upto 20}
  cout<<ar.size()<<endl;
  cout<<ar.capacity()<<endl;
  for(int i=0;i<ar.size();i++)
  cout<<ar[i]<<" ";
  return 0;
} 