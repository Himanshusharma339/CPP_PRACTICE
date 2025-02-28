#include<iostream>
#include<algorithm>
#include<String>
using namespace std;
int main()
{
    string s="";
    cin>>s;
    //sort
    //sort(s.begin(),s.end());
   reverse(s.begin(),s.end());
   cout<<s;
}
