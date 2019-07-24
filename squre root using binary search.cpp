
#include<bits/stdc++.h>
using namespace std;
double sqrt(int n,int m)
{
    int low=0,hi=n;
    int mid;
    while(low<=hi)
    {
        mid=(low+hi)/2;
        if(mid*mid==n)
            return mid;
        else if(mid*mid>n)
            hi=mid-1;
        else
            low=mid+1;
    }
    double ans=mid,pre=0.1,a=10;
    for(int i=0;i<m;i++)
    {
    while(ans*ans<=double(n))
    {
        ans=ans+pre;
        cout<<ans<<endl;
    }
    ans=ans-pre;
    pre=pre/10;
    //cout<<pre<<endl;
    }
    return ans;

}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<sqrt(n,m)<<endl;
}
