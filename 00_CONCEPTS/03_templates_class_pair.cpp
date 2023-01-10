 #include<iostream>

using namespace std;
//Passing Different Datatypes
template<class T,class V>
class pairs{
    private:
    T x;
    V y;
    public:
    void setX(T x){
        this->x=x;
    }
    void  setY(V y){
        this->y=y;
    }
    T getX(){
        return x;
    }
    V getY(){
        return y;
    }
};
int main(){
    pairs<int,double> n1;
    n1.setX(10);
    n1.setY(20.2);
    cout<<n1.getX()<<endl;
    cout<<n1.getY()<<endl;
    return 0;
}
