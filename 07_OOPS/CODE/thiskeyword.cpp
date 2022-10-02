#include<iostream>
using namespace std;
class persons
{	
	private:
	int age;
	string name;
	double salary;
	public:
	persons()
	{
		age=-1;
		name="null";
		salary=0;
	}
	void printData()
	{
		cout<<"Address Of This Keyword:- "<<this<<endl;
		cout<<"Name:- "<<(*this).name<<endl;
		cout<<"Age:- "<<(*this).age<<endl;
		cout<<"Salary:- "<<(*this).salary<<endl;
		/*
		Here This Keyword Is Optional Because Computer Can Easily Understand
		*/
	}
	persons(int age,string name,double salary)
	{
		/*
		Here This Keyword Is Mandatory Because Property Name & Paramater Name Is Same
		*/
		(*this).age=age;
		this->name=name;
		(*this).salary=salary;
		/*
		(*this) :- just DeReferencing
		(*this) = this->
		*/
	}

};
int main()
{
	persons p1;
	cout<<"Address Of P1:- "<<&p1<<endl;
	p1.printData();
	persons p2(20,"salih",22000);
	p2.printData();
	return 0;
}
