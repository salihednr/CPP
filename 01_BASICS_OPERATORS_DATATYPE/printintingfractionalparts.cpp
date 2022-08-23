/*
Write a program that reads 2 numbers a,b and divided them (a/b), but prints
Only the fractional Part
Input:- 201 25
Output: 0.04(201/25 = 8.04)

Concept
Int/Int = Integer
Int/Double = Double
Double - Integer = Fraction
*/

#include<iostream>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    cout<<(a/b)-((int)a/(int)b);
    return 0;
}
/*
Second Solution

#include<iostream>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    cout<<(a%b)/b;
    return 0;
}


*/