/*
Find NOs
Read Integer N , Then Read N Strings
    Print only the string (2 letters of 'O' "N")
    These Two Letter Must be N and Letter O
        REGARDLESS OF LOWER/UPPER CASE
        REGARDLESS OF THE 2 LETTERS ORDER
        Print "No","ON","no","On" but ignore "YEs","Noooo"
        A word of 2 letters only N and O

Input 
9
Yss NO NoOO oN Salih no nN oOOoo oO

*/
#include<iostream>
using namespace std;
int main()
{
    
   int n;
   cin>>n;
   while(n--)
   {
        string name;
        cin>>name;
        if(name=="No" || name=="NO" || name=="nO" || name=="no" || name =="ON" || name=="On" || name=="oN" || name=="on")
        cout<<name;
   }
   return 0;
}