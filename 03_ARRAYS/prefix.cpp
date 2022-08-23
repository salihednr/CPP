/*
Is Prefix
Read 2 Strings 
print yes if string is prefix else No
Input:-
ABCD AB =>YES
ABCD A =>YES
ABCD ABCD=>YES
ABCD ACD =>NO
*/
#include<iostream>
using namespace std;
int main()
{
    bool strCheck=true;
    string input,str;
    cin>>input>>str;
    if(input.size()<str.size())
    {
        cout<<"NO";
        return 0;
        //This Helps To Reduce Steps
        //This Step Is Optional
    }
    else
    {
        for(int i=0;i<str.length();i++)
        {
            if(input[i]!=str[i])
            { 
                strCheck=false;
                break;
            }
        }
    }
    if(strCheck)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}