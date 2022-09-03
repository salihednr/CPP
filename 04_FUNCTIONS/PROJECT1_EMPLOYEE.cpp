/*
Project -1
Employee Project
*/
#include<iostream>
using namespace std;
int choice(int num);
void print();
void ageCheck();
void updateNameFunction(string &updateName);
void ageInput();
void filter(int start,int end,bool check);
void gendInput();
void gendCheck();
void delByName(string &nameDel);
const int MAX=10000;
string names[MAX];
int age[MAX];
double salary[MAX];
char genders[MAX];
int i=0;
int main()
{
    print();
    return 0;
}

int choice(int num)
{
    cout<<"You Have Selected  Choice:- "<<num<<"\n";
    if(num==1)
    {
        //Name
        cout<<"1) Please Enter Name:- ";
        getline(cin,names[i]);
        getline(cin,names[i]);
        //Age
        ageInput();
        //Salary
        cout<<"3) Please Enter Salary:- ";
        cin>>salary[i];
        //Gender
        gendInput();
    }
    else if(num==2)
    {
        int k=0;
        for(int j=0;j<i;j++)
        {
            if(age[j]!=-1)
            {
            cout<<(k+1)<<") Unique ID:- "<<(j+1)<<endl;
            cout<<(k+1)<<") Name:- "<<names[j]<<endl;
            cout<<(k+1)<<") Age:- "<<age[j]<<endl;
            cout<<(k+1)<<") Salary:- "<<salary[j]<<endl;
            if(genders[j]=='m'||genders[j]=='M')
            {
                cout<<(k+1)<<") Gender:- "<<"Male\n\n";
            }
            else
            {
                cout<<(k+1)<<") Gender:- "<<"Female\n\n";

            }
            k++;
            }
        }
        print();
    }
    else if(num==3)
    {
        int ageStart;
        int ageEnd;
        cout<<"Please Enter Starting Age:- ";
        cin>>ageStart;
        cout<<"Please Enter Ending Age:- ";
        cin>>ageEnd;
        bool check=false;
        filter(ageStart,ageEnd,check);
    }
    else if(num==4)
    {
        int salaryStart;
        int salaryEnd;
        cout<<"Please Enter Starting Salary:- ";
        cin>>salaryStart;
        cout<<"Please Enter Ending Salary:- ";
        cin>>salaryEnd;
        bool check=1;
        filter(salaryStart,salaryEnd,check);
    }
    else if(num==5)
    {
        //Updating Salary By Name
        string updateName;
        cout<<"Please Enter Name To Update:- ";
        getline(cin,updateName);
        getline(cin,updateName);
        //update name
        updateNameFunction(updateName);

    }
    else if(num==7)
    {
        int sum;
        //monthly expenses
        for(int j=0;j<i;j++)
        {
            sum+=salary[j];
        }
        cout<<"Monthly Company's Total Expense Is:- "<<sum<<endl<<endl;
        print();

    }
    else if(num==6)
    {
        string nameDel;
        cout<<"Please Enter The Name You Want To Delete:- ";
        getline(cin,nameDel);
        getline(cin,nameDel);
        delByName(nameDel);
    }
    else if(num==8)
    {
        cout<<"Program Is Ended";
        return 0;
    }
    else
    {
        cout<<"You Have Entered Wrong Input Please Enter Correct Input\n";
        print();
    }
    return 0;
}
//Printing Choices
void print()
{
    int choices;
    cout<<"Enter Your Choices:- \n";
    cout<<"1) Add New Employee\n";
    cout<<"2) Print All Employees\n";
    cout<<"3) Fire By Age Filtering\n";
    cout<<"4) Fire By Salary Filtering\n";
    cout<<"5) Update Salary By Name\n";
    cout<<"6) Delete By Name\n";
    cout<<"7) Total Monthly Salary Expenditure\n";
    cout<<"8) Stop Program\n";

    cin>>choices;
    choice(choices);
}
//Checking Gender
void gendCheck()
{
    if(!(genders[i]=='M'||genders[i]=='m'||genders[i]=='F'||genders[i]=='f'))
    {
    cout<<"You Have Selected Wrong Gender Please Select Properly\n";
    gendInput();
    }
    else
    {
        ++i;
        print();
    }
}
//inputting gender
void gendInput()
{
cout<<"4) Please Enter Gender[M/F]:- ";
cin>>genders[i];
gendCheck();
}
//filtering age and salary
void filter(int start,int end,bool check)
{
    for(int j=0;j<i;j++)
    {
        if(check==0&&age[j]>=start&&age[j]<=end)
        {
            age[j]=-1;
        }
        if(check==1&&salary[j]>=start&&salary[j]<=end)
        {
            age[j]=-1;
        }
    }
    print();
}
void ageInput()
{
    cout<<"3) Please Enter Age:- ";
    cin>>age[i];
    ageCheck();

}
void ageCheck()
{
    if(age[i]<=18 || age[i]>=70)
    {
    cout<<"You Are Not Eligible To Work Please Enter Correct Age\n";
    ageInput();
    }
}
void updateNameFunction(string &updateName)
{
    for(int j=0;j<i;j++)
    {
        if(names[j]==updateName)
        {
            cout<<"Old Salary Is:- "<<salary[j]<<endl;
            cout<<"Please Enter New Salary:- ";
            int newSal;
            cin>>newSal;
            salary[j]=newSal;
            cout<<"Salary Is Updated\n";
            print();
        }
    }
    cout<<"Entered Name Is Not Available In Employees List\n";
    print();
}
//Delete By Name
void delByName(string &nameDel)
{
    for(int j=0;j<i;j++)
    {
            if(names[j]==nameDel)
            {
                age[j]=-1;
                cout<<"Succesfully Deleted\n";
                print();
            }
    }
    cout<<"Entered Name Is Not Available In Employees List\n";
    print();
}
/*
*/
