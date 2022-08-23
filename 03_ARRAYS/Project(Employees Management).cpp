/*
Application - 1
help factory to manage his employees
Create A Program That Does The Following 
    Dusplay The Following Choices
        Enter Your Choice:
        1)Add new employee
        2)Print All Employees
        3)Delete By Filtering The Age;
        4)Delete By Filtering The Salary;
        5)Update Salary By Name
        6)Stop The Program
Keep The Program Running Forever. Display The Choices and user input from 1-4
Data

1)Salih
19
M
20000

2)Ashwin
20
M
21000

3)Renuka Nair
21
F
23000

4) Priyanka
17
F
24000

5) Ashwini
25
F
30000

5) Ajith Menon
29
F
35000

*/
#include<iostream>
using namespace std;
int main()
{
    const int MAX=1000;
    int age[MAX]={0};
    int salary[MAX]={0};
    string employees[MAX]={"0"};
    char gender[MAX];
    int num;
    int i=0;
    //need vector concept to avoid MAX
    while(true)
    {
        cout<<"Enter Your Choice:-"<<endl;
        cout<<"1) Add New Employee"<<endl;
        cout<<"2) Print All Employees"<<endl;
        cout<<"3) Delete By Filtering The Age"<<endl;
        cout<<"4) Delete By Filtering The Salary"<<endl;
        cout<<"5) Update Salary By Name"<<endl;
        cout<<"6) Stop The Program"<<endl;
        cin>>num;
        if(num==1)
        {
            //Add New Employee
            string name;
            int age1;
            char gen;
            int sal;
            cout<<"Please Enter Employee Name:- ";
            getline(cin,name);
            getline(cin,name);
            employees[i]=name;
            cout<<"Please Enter Age:- ";
            cin>>age1;
            age[i]=age1;
            while(true)
            {
                cout<<"Enter Gender M/F:- ";
                cin>>gen;
                if(gen=='M' || gen=='F')
                break;
                else
                cout<<"Entered Wrong Input\n";
            }
            gender[i]=gen;
            cout<<"Please Enter Salary:- ";
            cin>>sal;
            salary[i]=sal;
            cout<<"Added Successfully\n";
            i++;
        }
        else if(num==2)
        {
            //Print All Employees
            int k=1;
            for(int j=0;j<i;j++)
            {
                if(age[j]!=-1)
                {
                cout<<"\n";
                cout<<(k)<<". "<<"Unique Id:- "<<(j+1)<<"\n";
                cout<<(k)<<". "<<"Name:- "<<employees[j]<<"\n";
                cout<<(k)<<". "<<"Age:- "<<age[j]<<"\n";
                cout<<(k)<<". "<<"Gender(M/F):- "<<gender[j]<<"\n";
                cout<<(k)<<". "<<"Salary:- "<<salary[j]<<"\n";
                k++;
                }
            }
        }
        else if(num==3)
        {
            //Delete By Filtering The Age
            int start;
            int end;
            cout<<"Please Enter Starting & Ending Age To Delete\n";
            cin>>start;
            cin>>end;
            for(int j=0;j<i;j++)
            {
                if(age[j]>=start&&age[j]<=end)
                {
                    age[j]=-1;
                    salary[j=-1];
                }
            }
        }
        else if(num==4)
        {
            //Delete By Filtering The Salary
            int start;
            int end;
            cout<<"Please Enter Starting & Ending Salary To Delete\n";
            cin>>start;
            cin>>end;
            for(int j=0;j<i;j++)
            {
                if(salary[j]>=start&&salary[j]<=end)
                {
                    salary[j]=-1;
                    age[j]=-1;
                }
            }
        }
        else if(num==5)
        {
            //Update Salary By Name
            cout<<"Please Enter Name To Update Salary";
            string nam;
            getline(cin,nam);
            getline(cin,nam);
            bool check=false;
            for(int j=0;j<i;j++)
            {
                if(nam==employees[j])
                {
                    cout<<"Please Enter Salary You Want To Update\n";
                    int salery;
                    cin>>salery;
                    salary[j]=salery;
                    check=true;
                    break;
                }
            }
            if(check==true)
                cout<<"Updated Succesfully\n";
            else
                cout<<"You Entered Wrong Name, Updation Failed\n";
        }
        else if(num==6)
        {
            //end program
            cout<<"Program Is Going To End"<<endl;
            return 0;
        }
        else
        {
            //wrong input
            cout<<"You Entered Wrong Input\n";
            continue;
        }

    }
    return 0;
}