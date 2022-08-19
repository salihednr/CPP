/*
Read 2 Integer X & Y
Compute X^Y (X*X*.....)
Input
3,2
2,8
Output
9
256

*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int product=1;
    int start=1;
    cin>>x>>y;
    while(y>=start)
    {
        
        product*=x;
        start++;
    }
    cout<<product;
    return 0;
}
/*
Second Method
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int product=1;
    cin>>x>>y;
    while(y>=1)
    {
        
        product*=x;
        y--;
    }
    cout<<product;
    return 0;
}
*/

/*
Third Method
By including cmath library
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int num,power;
    cin>>num>>power;
    cout<<pow(num,power);
	return 0;
}
*/