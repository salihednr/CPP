/*
*/
#include<iostream>
using namespace std;
void hello(string &name);
int main()
{
    int array[3]={1,2,3};
    string name="Salih Edneer";
    cout<<name<<endl;
    cout<<array<<endl;
    hello(name);
    cout<<name;
    return 0;
}
void hello(string &name)
{
    name="Ashwin Manathavady";
    cout<<name<<endl;
}
/*
Three Types Of Passing
1) Pass By Value
2) Pass By Referance(only &)
3) Pass By Pointer (& and *)
Array Is By Default Pass By Referance (not array[2] which is passing value directly)
note :- 
if variable need not to be updated then we can use 
const &variable_name so no changes will be permitted

Using Pass By Referance Not Creating Any New Copies It Is Just Like Alias So Less Memory Will Be Taken By In Case Of Pass By Value Or Pointer New Copy Has Created 
Pass By Value = Call By Value
Pass By Referance = Call By Referance
Pass By Pointer = Call By Pointer

Difference Between Pass By Pointer & Pass By Referance
Pointer is creating a new variable which stores the address of variable which can be updated 
creating a new copy which holds the address
but pass by referance is like alias creating new name 
https://www.youtube.com/watch?v=7HmCb343xR8

*/
