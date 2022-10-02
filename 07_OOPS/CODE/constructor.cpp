/*
Constructors Have No Datatype & Return Type
Name Must Be Same As Functions Name
When We Are Creating Objects Automatically Default Constructor Is Called To Assign Garbage Values
If We Create Parametrized Constructors Then We Are Supposed To Use Non Parametrized Constructor As Well Because Default One WIll Be Removed AUtomatically

*/
#include<iostream>
using namespace std;
class persons{
    private:
    string name;
    int age;
	double height;
	public:
	//Constructor
	persons()
	{
		cout<<"Default Constructor Is Called By Program Automatically "<<endl;
		name="null";
		age=-1;
		height=0.0;
	}
	//Parametrized Constructors (Constructors Will Act As Setters)
	persons(string nm,int ag,double ht)
	{
		//Default Constructor Is Overridden
		name=nm;
		age=ag;
		height=ht;
	}
	//Constructor Overloading Will Work When There Is Parameters
	//Setters
	void setData(string nm,int ag,double ht)
	{
		name=nm;
		age=ag;
		height=ht;
	}
	//Getters
	void printout()
	{
		cout<<"Name Of The Person Is "<<name<<endl;
		cout<<"Age Of The Person Is "<<age<<endl;
		cout<<"Height Of The Person Is "<<height<<endl;
	}
};
int main()
{
	string name;
	int age;
	int height;
	persons p1;
	persons p2("Ashwathi Achu",20,6.5);
	p1.printout();
	cout<<"Second Person"<<endl;
	p2.printout();
	return 0;
}
