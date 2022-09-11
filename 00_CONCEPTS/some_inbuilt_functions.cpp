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
#include<cstring>
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
/*
All These Come Under 
#include<cstring>
1) strlen():-Length of String
It Is Used To Print The Length Of Character Array/String It will avoid \0
2) strcpy(str2, str1)
char str1[20] = "C programming";
char str2[20];
It is used top copy character array of str1 to str2
3) strcomp():- To Compare Two Strings
if string equals then return 0 else non zero
*/
