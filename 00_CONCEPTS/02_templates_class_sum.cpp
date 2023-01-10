#include<iostream>

using namespace std;
//Sum
template<class T>
class Numbers{
    private:
    T x;
    T y;
    public:
    void setX(T x){
        this->x=x;
    }
    void  setY(T y){
        this->y=y;
    }
    T getX(){
        return x;
    }
    T getY(){
        return y;
    }
    T summation(){
        return x+y;
    }
};
int main(){
    Numbers <int> n1;
    n1.setX(10);
    n1.setY(20);
    Numbers <double> n2;
    n2.setX(20.2);
    n2.setY(22.2);
    cout<<n1.getX()+n1.getY()<<endl;
    cout<<n2.summation()<<endl;
    return 0;
}
