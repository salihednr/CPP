/*
Assume A Years Is 12 Months , But Each Month is 30 Days
So An Year has 30 * 12 = 360 days
Read An Integer: Whole Number Of Days Of Someone Age. Print 3 Numbers
Total Years 
Total Months
Remaining Days

360 (1 0 0)
30 (0 1 0)
10 (0 0 10)
*/
#include<iostream>
using namespace std;
int main()
{
    int days;
    cin>>days;
    int years = days/360;
    days-=(years*360); // days%=360
    cout<<years;
    int months = days/30;
    cout<<months;
    days-=(months*30); // days%=30
    cout<<days;
    return 0;
}