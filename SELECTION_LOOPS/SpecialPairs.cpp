/*
Find Special Pairs
Count How Many Pairs Such That Following This Rule
1) X [50,300]
2) Y [70,400]
3) X<Y
4) (X+Y) Is Divisible By 7
*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello";
    int count =0;
    for(int y=70;y<=400;y++)
    {
        for(int x=50;x<=300;x++)
        {
            if(y>x)
            {
                if((x+y)%7==0)
                count++;
            }
            else
            continue;
        }
    }
    cout<<count;
    return 0;
}