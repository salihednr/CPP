/*
Maximum Of Absolute 2 Numbers
1)
C++ Has Two Types Of Function Usage Before Main Function And After Main Function
Problem Will Not Occur if we declare function before main function
problems occur when we use function after main function
we have to use function before main function if function is declared after main function 
int ourMax(int m,int n); //like this
int ourAbs(int k);
with all the parameters
2) 
A Function Can't Return Two Values Together Only One Value Can Be Returned
3)
If We Don't Want To Return Anything Use void()
4)
We Can use default Value
int max(int a,int 5) this is right
int max(int a=4,int b) this is wrong way use default value at the end
if we pass (2) then (2,5) will be taken
if we pass (2,4) then (2,4) will be taken default value is overridden
5)
Function Overloading
When We Use Several Functions With Same Name But Different Parameters(Datatypes or number of variables)
example given below
6)If we pass different datatypes if possible function will automatically cast
implicit casting will happen
*/
//integer then maximum
//decimal then minimum
//three values then maximum
#include<iostream>
using namespace std;
int trying(int a,int b)
{
    if(a>b)
        return a;
    return b;

}
double trying(double a,double b)
{
    if(a<b)
        return a;
    return b;

}
int trying(int a,int b,int c)
{
    return (max(max(a,b),c));

}
int main()
{
    cout<<trying(10,20)<<endl;
    cout<<trying(20.5,25.2)<<endl;
    cout<<trying(20,30,40);
    return 0;
}
