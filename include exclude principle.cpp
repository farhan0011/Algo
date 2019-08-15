#include<bits/stdc++.h>
using namespace std;
int res(int arr[],int n,int m)
{
    int p=(1<<n);
    int c;
    int odd=0,even=0;
    for(c=1;c<p;c++)
    {
        int ans=1;
        for(int j=0;j<n;j++)
        {
            if(c&(1<<j))
                ans*=arr[j];
        }
        if(__builtin_popcount(c)&1)
            odd+=m/ans;
        else
            even+=m/ans;
    }
    return odd-even;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<res(arr,n,m)<<endl;
}
