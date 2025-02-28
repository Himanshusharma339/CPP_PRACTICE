#include<iostream>
using namespace std;
int main()
{
    int mul=1;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<=4;i++)
    {
        mul=mul*arr[i];
    }
    cout<<mul<<endl;
}