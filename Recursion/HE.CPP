#include<iostream>
using namespace std;
int tasty (int n,int tastiness[])
{
    // for(int i=0;i<n;i++)
    // {
    //     int subarraysum =0;
    //     for(int j = i;j<n;j++)
    //     {
    //         subarraysum += tastiness[j];
    //         mx = max(subarraysum,mx);
    //     }
    // }

    // algorithm  sum<0 it is not good  -1,-5,8
    int mx = tastiness[0];
    int subarraysum =0;
    for(int i=0;i<n;i++)
    {
        subarraysum += tastiness[i];
        mx = max(subarraysum,mx);
        if(subarraysum < 0)
        {
            subarraysum =0;
        }
    }
    return mx;
}
int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)

}