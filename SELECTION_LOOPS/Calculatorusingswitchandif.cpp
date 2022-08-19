/*
Simple Calculator Using 
Selection

Input
Enter first number
Enter Sign +,-,*,/
Enter Second number
*/

#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char sign;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter Sign +,-,*,/";
    cin>>sign;
    cout<<"Enter Second number";
    cin>>num2;
    if(sign=='+')
    cout<<num1+num2;
    else if(sign=='-')
    cout<<num1-num2;
    else if(sign=='*')
    cout<<num1*num2;
    else if(sign=='/')
    cout<<num1/num2;
    else
    cout<<"Enter Wrong Sign";
    return 0;
}

/*
Calculator Using Switch Statement
#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char sign;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter Sign +,-,*,/";
    cin>>sign;
    cout<<"Enter Second number";
    cin>>num2;
    switch (sign)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    
    default:
        cout<<"You are entered wrong sign";
        break;
    }
}
*/
