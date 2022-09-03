/*
Maximum Of Absolute 2 Numbers
1)
C++ Can Declare Function In Two Ways
1) Before Main Function (Backward Declaration)
2) After Main Function (Forward Declaration)
In Forward Declaration We Are Supposed To Add That function and parameters before main function
in backward declaration no such errors will happen 
int ourMax(int m,int n); //like this
int ourAbs(int k);

Parameters Vs Arguments
Parameters are variables defined by a function that receive values when they are called
Arguments Are Value Which Must Be Stored In Parameters Or Must Be Passed To Parameters
If Arguments Exist Then Parameter Is Mandatory Vice Versa Is Not True (Converse May Not Be True)

2) 
Functions Can't Return Two Values Simultaneously Only One Value Can Be Returned At A Time
3)
If We Don't Want To Return Anything Use void()
4)
We Can use default Value
int max(int a,int b=5) -✅- this is correct method for default parameters
int max(int a=4,int b) -❌- this is wrong way use only default parameters at the end of variable This Makes Confusion Because Compiler Don't To Pass Which One
if we pass (2) then (2,5) will be taken
if we pass (2,4) then (2,4) will be taken default values will be over ridden

5)
Function Overloading
When We Use Several Functions With Same Name But Different Parameters(Datatypes or number of variables)
example given below

Code.cpp
int num(int a,int b){.....}
int num(int a){....}
inside main function
num(8); this will be automatically passed to second function
num(3,9); this will be automatically passed to first funcion

6)If we pass different datatypes that not corresponding to declaration if possible function will automatically cast
implicit casting will happen if not possible error will occur

Implicit Casting:- Data Convertion Done By Compiler, Without Writing Any Coded
Explicit Casting:- Data Convertion Done By User By Writing Codes

7)In forward declaration if we want to pass default arguement use in before main function's part in functions part
int area(int l,int b=0); like this
int area(int l,int b=0) // not like this this will show an error
int area(int l,int b)
{
    if(b==0)
    b=l;
    return l*b;
}
*/

/*
How A Function Works(Call Stack)?

Two Types Of Memory 
Stack And Heap 

Call Stack
Whenever we call the function it gets created in stack memory
after function ends all the memory in stack related to that function is cleared off
The Function That Is Currently Is Always The Top Of The Stack
LIFO => Last In First Out
There Are 5 Functions Main Function Calls 2nd, 2nd Calls 3rd, Go On.. Upto 5th Function After Calling The 5th Function-
5th Function Parts Will Be Cleared Off Then 4th..... Then It Will Return To Main Function
| 5th Function Parts  |
| 4th Function Parts  |
| 3rd Function Parts  |
| 2nd Function Parts  |
| main Function Parts |
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
