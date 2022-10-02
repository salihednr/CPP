#include<iostream>
using namespace std;
class students{
	private:
	string name;
	int age;
	double salary;
	char gender;
	public:
	//Setters
	void setData(string name,int age,double salary,char gender)
	{
		(*this).name=name;
		(*this).age=age;
		this->gender=gender;
		this->salary=salary;
	}
	//Getters
	void printData()
	{
		cout<<"Name:- "<<name<<endl;
		cout<<"Age:- "<<age<<endl;
		cout<<"Salary:- "<<salary<<endl;
		if(gender=='M'||gender=='m')
		cout<<"Gender:- Male"<<endl<<endl;
		else if(gender=='F'||gender=='f')
		cout<<"Gender:- Female"<<endl<<endl;
		else
		cout<<"Gender:- Not Specified"<<endl<<endl;
	}
	//Constructor
	students(string name,int age,double salary, char gender)
	{
		(*this).age=age;
		(*this).gender=gender;
		this->salary=salary;
		this->name=name;
	}
	//Default Constructor Because s1 is using it
	students()
	{
		name="null";
		age=-1;
		salary=-1;
		gender='n';
	}
	double getDataSalary()
	{
		return salary;
	}
	void setDataSalary(double salary)
	{
		(*this).salary=salary;
	}
};
int main()
{
	students s1;
	s1.setData("Ashwin",19,25000,'M');
	s1.printData();
	//Only Works During Initialisation Or While Creating Constructor Won't Work After The Creation
	students s2(s1);
	s2.printData();
	students s3("Renuka",20,20000,'F');
	s3.printData();
	students s4;
	cout<<"Fathima Before Calling Copy Assignment Operator"<<endl;
	s4.printData();
	//Copy Assignment Operator It Will Work Even After The Creation Of Objects
	cout<<"Fathima After Calling The Copy Assignment Operator"<<endl;
	s4=s3;
	s4.printData();
	//Copying Only Some Parts
	//Everyone Should Have Same Salary As Ashwin
	cout<<"\n\n\nSalary Is Updated"<<endl;
	s2.setDataSalary(s1.getDataSalary());
	s3.setDataSalary(s1.getDataSalary());
	s4.setDataSalary(s1.getDataSalary());
	cout<<"All The Empoyees Salary Has Hiked"<<endl<<endl<<endl;
	s1.printData();
	s2.printData();
	s3.printData();
	s4.printData();

	return 0;
}
