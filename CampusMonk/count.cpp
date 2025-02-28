#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int count=0;
    int arr[] ={7,4,10,0,20,4,1,6,8};
    int n =  sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter elemens =";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        count++;
    }
    cout<<count;


}