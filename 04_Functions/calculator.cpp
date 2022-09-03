/*
Infinite Calculator Calculator
*/
#include<iostream>
using namespace std;
double totalValue=0;
double inputNum();
int print();
int calcFunction();
int main()
{
	cout<<"Enter Number:- ";
	cin>>totalValue;
	calcFunction();
	return 0;
}
double inputNum()
{
	double n1;
	cout<<"Enter Number:- ";
	cin>>n1;
	return n1;
}
int calcFunction()
{
	int check=print();
	if(check==1)
	{
		//addition
		int calc2=inputNum();
		totalValue+=calc2;
		calcFunction();
	}
	else if(check==2)
	{
		//substraction
		int calc2=inputNum();
		totalValue-=calc2;
		calcFunction();
	}
	//division
	else if (check==3)
	{
		int calc2=inputNum();
		if(calc2!=0)
		totalValue/=calc2;
		else
		{
			while(calc2==0)
			{
			cout<<"A Number By 0 Is Not Possible Enter New Number\n";
			calc2=inputNum();	
			}
			totalValue/=calc2;
		}
		calcFunction();
	}
	else if (check==4)
	{
		//multiplication
		int calc2=inputNum();
		totalValue*=calc2;
		calcFunction();
	}
	else if (check==5)
	{
		cout<<"Total Value Is:- "<<totalValue;
		return 0;
	}
	else{
		cout<<"You Have Entered Wrong Input\n";
		calcFunction();
	}
	return 0;
}
int print()
{
	int option;
	cout<<"1) Add\n";
	cout<<"2) Substract\n";
	cout<<"3) Divison\n";
	cout<<"4) Multiplication\n";
	cout<<"5) End The Program By Printing Values\n";
	cin>>option;
	return option;
}