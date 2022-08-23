/*
Is Suffix
Read 2 Strings 
print yes if string is Suffix else No
Input:-
Solution -1
if we reverse both input and str it will automatically become prefix so use same algorithm used in suffix
but this is too lengthy
*/
/* #include<iostream>
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
    }
    else
    {//reversing input
    for(int i=0;i<(input.size()/2);i++)
    {
        int dup=input[i]; //we can use char as well but int will store ascii value
        input[i]=input[input.size()-i-1];
        input[input.size()-i-1]=dup; //int will replace ascii value to character here
    }
    //reversing str;
    for(int i=0;i<(str.size()/2);i++)
    {
        int dup=str[i];
        str[i]=str[str.size()-i-1];
        str[str.size()-i-1]=dup;
    }
    //comparing
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
} */
/* Solution -2 */
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
    }
    else{
        for(int i=0;i<str.size();i++)
        {
            if(input[input.size()-i-1]!=str[str.size()-i-1])
            strCheck=false;
        }
    }
    if(strCheck)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}