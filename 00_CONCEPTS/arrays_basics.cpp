
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
}
/*
1) Array Starts From [0,N-1]
2) Arrays Must Be Same Type In C++,JAVA,C And They Are Stored In Contiguos Memery Location
3) If Arrays Is Not Initialised Then It Will Contain Garbage Values 
4) If arrays is initialised except initilised values all other are assigned as 0 It must be initilised not updating (eg inputting using for loop)
5) String And Character Arrays Must Contain Null Character '\0'
6) Size Is Optional Even Tough Once It is initialised we can't change size it will take size as how many elements it is containing if we are not specifing size
7) capacity of int/char/double array = sizeof(array)/sizeof(int)
8) When we are passing an array we should pass size(capacity) of array as well Because Array inbuilt is pass by referance so variable only storing address of array
9) array[i] this is not pass by referance this is just similar to passing the elements
10) If a[] is an array then cout<<a and cout<<&a will only print same memory location by default (printing with just variable name without[]) it will print it's
memory location only
Array Is Like Constant Pointer Once It Initialised It Can't Change The Value(Memory Address) Like In Pointer
11) arrayCall(ar) -> arrayCall(int ar) which is equivalent to arrayCall(&ar) -> arrayCall(int *ar)
*/
