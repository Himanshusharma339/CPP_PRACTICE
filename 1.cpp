#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[] ={7,4,10,0,20,4,1,6,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=8;i++)
    {
        sum=sum+arr[i];

    }
    cout<<sum<<endl;
    cout<<"The Avg is="<<(float)sum/n;
}