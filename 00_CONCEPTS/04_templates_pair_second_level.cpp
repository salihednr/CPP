#include<iostream>

using namespace std;
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
    pairs<int,pairs<int,int>> n1;
    pairs<int,int> temp;
    temp.setX(10);
    temp.setY(11);
    n1.setY(temp);
    n1.setX(10);
    cout<<n1.getY().getX()<<endl;
    cout<<n1.getY().getY()<<endl;
    return 0;
}
