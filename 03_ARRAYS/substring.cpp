/*
Is Substring
Read 2 Strings 
print yes if string is substring else No
Input:-
ABCDEFG ABCD => 
ABCDEFG ABCDEF => 
ABCDEFG EFG => 
ABCDEFG DEFG => 
ABCDEFG ABCDEFG => 
ABCDEFG ABCDEFGK = > 
Solution -1
*/
#include<iostream>
using namespace std;
int main()
{
    string input,str;
    int j;
    int position=0;
    cin>>input>>str;
    bool check=true;
    if(input.size()<str.size())
    {
        cout<<"NO";
        return 0;
    }
    //finding out the position
    for(int i=0;i<input.size();i++)
    {
        for(j=0;j<str.size();i++)
        {
            if(input[i]==str[j])
            {
            position=i;
            break;
            }
        }
        if(input[i]==str[j])
        {
        position=i;
        break;
        }
    }
    int k=0;
    for(int i=position;i<(position+str.size());i++)
    {
        if(input[i]!=str[k])
        {
            check=false;
        }
        k++;
    }
    if(check)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
