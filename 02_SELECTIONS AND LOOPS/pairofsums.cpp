/*
read n,m,sum
find all pairs that has
a+b==sum
Do it in 2 for loop
Do it in 1 for loop(Better optimised approach)
where
a[1,n]
b[1,m]
input
10
25
21
Ouput
1,20
2,19
3,18
4,17
5,16
6,15
7,14
8,13
9,12
10,11
*/
#include<iostream>
using namespace std;
int main()
{
    int n,m,sum;
    cin>>n>>m>>sum;
    for(int i=1;i<=n;++i)
    {
        int j=sum-i;
        if(j>=1 && j<=m)
        cout<<i<<" "<<j<<endl;
    }
    return 0;
//sum>(i,j)
//(i,j)>=1
}
/*
First approach consume less time and memory so it is better approach by 
checking in n,m by only iteriting single loop not both loop

Second Approach 


#include<iostream>
using namespace std;
int main()
{
    int n,m,sum;
    cin>>n>>m>>sum;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;j++)
        {
            if((i+j)==sum)
            cout<<i<<","<<j<<endl;
        }
    }

}

*/
