/*
* => Value Of Operator
& => Address Of Operator

1) If We Print Any Variable With Just & it will print memory location of the variable (cout<<&a)
2) If there is any pointer, * can be used as referance so known as value of operator if a is a pointer 
(cout<<*a)
this line will print value at which a is holding
3) Creating A Pointer And Updating
int a=3;
int *ptrA=&a;
here ptrA is a pointer if we try to print just cout<<ptrA will print memory location of a which (&a)
cout<<*ptrA will print value holded by a
*ptrA=30; which will update a and ptrA because both are interconnected whatever changes made in *ptrA will also affect a as well
4) Pointer To A pointer
if ptrA is pointer creating another pointer which points ptrA is
int **ptrPtrA = &ptrA;
int ***ptrPtrPtrA = &ptrPtrA 
go on.....
5)

*/
#include<iostream>
using namespace std;
int main()
{
  return 0;
}
