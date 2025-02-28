#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int count_consonant(string s)
{
    int count =0;
    for(int i=0;i<s.size();i++)
    {
        if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
        {
            count++;
        }
        return count;
    }

}
int main()
{
    string s;
    getline(cin,s);
    cout<<count_consonant<<s;


}
//two string are they anagram or  not abc-->cba order differ but 1 1 baar aara ha mtlb anagram hai