/*It Helps To Build Width In Text*/
#include <iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main() {
    cout<<"---------|--------------|------------|"<<endl;
    cout<<"  SI NO  |     NAME     |   SALARY   |"<<endl;
    cout<<"---------|--------------|------------|"<<endl;
    cout<<setw(10)<<"1|"<<setw(15)<<"Salih Edneer|"<<setw(12)<<12000<<"|"<<endl;
    cout<<setw(10)<<"2|"<<setw(15)<<"Ashwin|"<<setw(12)<<10000<<"|"<<endl;
    cout<<setw(10)<<"3|"<<setw(15)<<"Neeraj|"<<setw(12)<<14000<<"|"<<endl;
    cout<<setw(10)<<"4|"<<setw(15)<<"Keerthana|"<<setw(12)<<16000<<"|"<<endl;

	return 0;
}
