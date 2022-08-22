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
Functions Can Be 
void
string
int 
double
char
datatype name(paramaters)
Two Types Of Passing
Pass By Value
Pass By Referance (&)
Array Is By Default Pass By Referance (not array[2]....)
if variable need not be updated then we can use 
const &variable_name so no changes will be permitted
Using Pass By Referance Not Creating Any Copies So Less Memory Will Be Taken

*/
