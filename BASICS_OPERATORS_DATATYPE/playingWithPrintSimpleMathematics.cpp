/*
Concept

Simple Maths
Operators 

Question:

Write A Program That Reads 2 Integers A,B
B is Either -1 Or 1
    if -1, print 2*A+1
    if 1, print A*A

Find Simple One Line Formula Using Mathematics (Without Loops,Operators)

First Approach

(-1+1)/2 = 0 // If B is -1 Then 0
(1+1)/2 = 1 // If B is 1 Then 1

((2*a+1)*((1-b)/2))+((a*a)*((2*b+1)/2))
(2*a+1)*((1-b)/2)) //(1-b)/2 when b becomes 1 it becomes 0 when b becomes -1 it becomes 1
((a*a)*((2*b+2)/3)) //(2*b+2)/3) when b becomes 1 it becomes 1 when b becomes -1 it becomes 0 {(2*b+2)/3} = {(2*b+1)/2} because when be is -1 then -1/2 it eventually 
become 0 when b is 1 then it is 1



Second Approach


#include <iostream>
using namespace std;
 
int main() {
    int a,b;
    cin>>a>>b;
    int is_b_neg1=-((b-1)/2);
    int is_b_pos1=(2*b+1)/2;
    cout<<(is_b_pos1*(a*a))+(is_b_neg1*(2*a+1));
    return 0;
}
 

*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b; // b is either -1 or 1
    cout<<((2*a+1)*((1-b)/2))+((a*a)*((2*b+2)/3));
    return 0;
}

