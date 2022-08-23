/*
Take Input Of 2D Array And Print It
take input of number of students and subjects
create 2d array based on that and take input then print the marks of each students and total score
then find the class topper who scored highest marks

salih Scored {10,20,20,10} Total Of:- 60
ashwin Scored {20,20,20,20} Total Of:- 80

Please Note The ,(Comma) don't print comma after the last element
*/
#include<iostream>
using namespace std;
int main()
{
    int students,subCount;
    cout<<"Please Enter Number Of Students:- ";
    cin>>students;
    cout<<"Please Enter Number Of Subjects:- ";
    cin>>subCount;
    int array[students][subCount];
    string names[students];
    //name
    for(int i=0;i<students;i++)
    {
        cout<<"Please Enter Student "<<i+1<<" Name:- ";
        cin>>names[i];
    }
    //input
    for(int i=0;i<students;i++)
    {
        cout<<"Enter The Marks Of Student:- "<<i+1<<endl;
        for(int j=0;j<subCount;j++)
            cin>>array[i][j];
        cout<<"\n";
    }
    //printing
    //finding the topper
    int maxValue;
    int sum;
    int Topperid;
    for(int i=0;i<students;i++)
    {
        sum=0;
        cout<<names[i]<<" Scored {";
        for(int j=0;j<subCount;j++)
            {
                sum+=array[i][j];
                cout<<array[i][j];
                if(j!=(subCount-1))
                cout<<",";
            }
        if(i==0||maxValue<sum)
        {
            maxValue=sum;
            Topperid=i;
        }
        cout<<"}";
        cout<<" Total Of:- "<<sum;
        cout<<"\n";
    }
    //printing the topper
    cout<<"Topper Is "<<names[Topperid]<<" Congratulations For Your Success";
    return 0;
}