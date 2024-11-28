#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // char arr[10];
    // cin>>arr;
    // cout<<arr<<endl;
    // char arr[4]={'a','b','c','d'}; bahot sare elsem aajate he use arr
    string s ="";//size is dynamic
    // cin>>s;
    // cout<<s;

    //input of line
    getline(cin,s);
    cout<<s;
    for(int i=0;i<s.size;i++)
    {
        cout<<"contain space";
    }
    return 0;

}