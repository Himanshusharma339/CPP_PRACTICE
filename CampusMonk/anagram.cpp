#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int count_anagram(string s)
{
    int count =0;
    for(int i=0;i<s.size();i++)
    {
        if(i==s[i])
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
    cout<<count_anagram<<s;


}