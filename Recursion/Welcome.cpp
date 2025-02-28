#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    // string s;
    // cin>>s;
    // map<char,int>mp;
    // for(int i=0;i<s.size();i++)
    // {
    //     // char c= s[i];
    //     mp[s[i]]++;
    // }
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
mp['v']=88;
mp['a'] =1;
mp['b'] =2;
mp['c'] =3;

mp.insert({'d',5});
// mp.erase('b');

for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }




    
}
//set O(logn) n->size of set