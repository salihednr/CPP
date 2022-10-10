/*
Project -1
Fraction
10/2 = 5/1
30/8 = 15/4
*/
#include<iostream>
using namespace std;
class fraction{
    private:
    int num;
    int den;
    int adding;
    public:
    //setters
    void setNumDen(int num,int den)
    {
        (*this).num=num;
        (*this).den=den;
    }
    //Addition
    void add(fraction const &f1,fraction const &f2)
    {
        int numerator=(f1.num*f2.den)+(f2.num*f1.den);
        int denominator=(f1.den)*(f2.den);
        (*this).num=numerator;
        (*this).den=denominator;
        simplify();
    }
    void simplify()
    {
        int gcd=1;
        int min=num;
        if(den<num)
        min=den;
        for(int i=2;i<=min;i++)
            if(den%i==0&&num%i==0)
                gcd=i;
        num/=gcd;
        den/=gcd;
    }
    void print(fraction f1,fraction f2)
    {
        cout<<f1.num<<"/"<<f1.den<<"   +   "<<f2.num<<"/"<<f2.den<<"   =   "<<this->num<<"/"<<this->den<<endl;
    }


};
int main()
{
    fraction f1;
    int a,b;
    cin>>a>>b;
    f1.setNumDen(a,b);
    fraction f2;
    cin>>a>>b;
    f2.setNumDen(a,b);
    fraction f3;
    f3.add(f1,f2);
    f3.print(f1,f2);
    return 0;
}
