#include<iostream>
using namespace std;
//Sum
template<class T>
T sum(T a,T b){
    return a+b;
}
int main(){
    cout<<sum<int> (10,20)<<endl;
    cout<<sum<double>(20.2,21.2)<<endl;
    return 0;
}
