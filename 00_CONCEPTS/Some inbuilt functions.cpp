/*
Some Inbuilt functions in c++
all this comes under in particular header file
so we have to include tha header file
here i have listed some of important inbuilt functions
1) #include<cmath>
2) #include<iomanip>
3) #include<cctype>
4) #include<iostream> // input & output
5) 
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<sqrt(25)<<endl; //square root
    cout<<ceil(-5.5)<<endl; //Ceiling/Smallest Integer Function
    cout<<floor(3.5)<<endl; // Floor/Greatest Integer Function
    cout<<pow(2,5)<<endl; // taking power like 2^5
    cout<<max(2,5)<<endl; // maximum of two
    cout<<max(max(2,5),9)<<endl; // we can use max((2,5),9) both works in same manner 
    cout<<abs(a-b); //|a-b| absolute value
    // but better is using max inside max when we wants to calculate more than 2 
    return 0;
}
