#include<bits/stdc++.h>
using namespace std;
void sievePhi(int n)
{
    vector<int>v;
    int ans=n,i;
    for(i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
           ans=ans-ans/i;
            while(n%i==0)
                n=n/i;
        }
    }
    if(n>1)
        ans=ans-ans/n;
        cout<<ans<<endl;
    return ;
}
int main()
{
    int n;
    cin>>n;
    sievePhi(n);
}
