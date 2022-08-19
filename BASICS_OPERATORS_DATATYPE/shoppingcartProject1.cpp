/*
Project -1
Write a program  To Input
1)Name (name)
2)Product Name (productName)
3)Wholesale Price(wholesalePrice)
4)Retail Price (retailPrice)
5)Number Of Quantity Sold(totalSold)
6)Refunded Product Quantity(refundedQuantity)

Output
Hey <name>
You are Selling <productName> at the price of <retailPrice>
you sold total <totalSold> total earning <>
<refundedQuantity> Refunded
Total Earning is <>
Your Profit is <>
*/
#include<iostream>
using namespace std;
int main()
{
    int wholesalePrice,retailPrice,totalSold,refundedQuantity,profit;
    string name,productName;
    cout<<"Please enter your name:- ";
    cin>>name;
    cout<<"Please enter your product name:- ";
    cin>>productName;
    cout<<"Please enter wholesale price:- ";
    cin>>wholesalePrice;
    cout<<"Please enter retail price:- ";
    cin>>retailPrice;
    cout<<"Please enter the quantity you have sold:- ";
    cin>>totalSold;
    cout<<"Please enter how much is refunded:- ";
    cin>>refundedQuantity;
    cout<<"Hey "<<name<<"\nYou are selling "<<productName<<" at the price of "<<retailPrice;
    cout<<"\nYou sold total items "<<totalSold<<" total earnings "<<totalSold*retailPrice<<endl;
    cout<<refundedQuantity<<" Refunded"<<endl;
    cout<<"Total earning is "<<(totalSold*retailPrice)-(refundedQuantity*retailPrice)<<endl;
    profit=((totalSold*retailPrice)-(refundedQuantity*retailPrice))-(wholesalePrice*(totalSold-refundedQuantity));
    //(totalSold-refundedQuantity)*(retailPrice-wholesalePrice);
    cout<<"Your profit is "<<profit;
    return 0;
}
