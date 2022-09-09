/*
Structures
*/
#include<iostream>
using namespace std;
//Declaring Structures
struct employees
  {
    string name;
    int age;
    double salary;
  };
//Nested Structures
struct topEmployees
{
  string position;
  string achievements;
  employees emp;
};
void printEmployeeDetails(employees employe)
{
  cout<<"Name:- "<<employe.name<<endl;
  cout<<"Age:- "<<employe.age<<endl;
  cout<<"Salary:- "<<employe.salary<<endl;
}
void printTopEmployees(topEmployees toppers)
{
  printEmployeeDetails(toppers.emp);
  cout<<"Role:- "<<toppers.position<<endl;
  cout<<"Achievements:- "<<toppers.achievements<<endl;
}
void printEmployeeDetailsArray(employees emplArray[])
{
  for(int i=0;i<3;i++)
  {  
  cout<<"Name:- "<<emplArray[i].name<<endl;
  cout<<"Age:- "<<emplArray[i].age<<endl;
  cout<<"Salary:- "<<emplArray[i].salary<<endl;
  }
}
int main() {
  //First Employee Accessing Structure
  employees empl;
  empl.name="salih";
  empl.age=20;
  empl.salary=27000;
  //Second Employee
  employees empl2;
  empl2.name="Ashwin";
  empl2.age=21;
  empl2.salary=25000;
  employees empl3={"Riyas",35,60000};
  //Passing Structures Through Function(Printing Structure)
  printEmployeeDetails(empl);
  printEmployeeDetails(empl2);
  printEmployeeDetails(empl3);
  //Accessing Nested Structure
  topEmployees top;
  top.position="CEO";
  top.achievements="Increased Sales";
  top.emp=empl2;
  printTopEmployees(top);
  //Array Of Structure
  employees employeeArray[3];
  employeeArray[0].name="Kedarnath";
  employeeArray[0].age=21;
  employeeArray[0].salary=25000;
  employeeArray[1].name="Athul Nambiar";
  employeeArray[1].age=22;
  employeeArray[1].salary=29000;
  employeeArray[2].name="Naseem Ashraf";
  employeeArray[2].age=24;
  employeeArray[2].salary=31000;
  printEmployeeDetailsArray(employeeArray);
	return 0;
}

