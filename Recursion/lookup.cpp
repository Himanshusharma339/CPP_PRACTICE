#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        // char c= s[i];
        mp[s[i]]++;
    }
    if(mp.count('c'>0))
    {
        cout<<"yes have it";
    }
    else
    {
        cout<<"not having";
    }
}