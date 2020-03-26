#include<bits/stdc++.h>
using namespace std;
int dr[1010][1010];
int dp[1010][1010];
///recursive sol
/*bool f(int coin[],int in ,int n,int rem)
{
    if(rem<0)
        return false;
    if(rem==0)
        return true;
    if(in>=n && rem!=0)
        return false;
    bool a=f(coin,in+1,n,rem-coin[in]);
    bool b=f(coin,in+1,n,rem);
    if(a==false&&b==false)
        return false;
    else
        return true;
}*/
int f(int coin[],int in,int n,int rem)
{
    if(rem<0)
        return -1;
    if(rem==0)
        return dp[in][rem];
    if(in>=n && rem!=0)
        return -1;
    if(dr[in][rem]!=0)
        return dp[in][rem];
    int a=coin[in]+f(coin,in+1,n,rem-coin[in]);
    int b=f(coin,in+1,n,rem);
    if(a=-1&&b==-1)
        return false;
    else
        return true;
}
int main()
{
    int n,tk;
    cin>>n>>tk;
    int coin[n];
    for(int i=0;i<n;i++)
        cin>>coin[i];
    if(f(coin,0,n,tk))
        cout<<"YES"<<endl;
    else
        cout<<"no"<<endl;
}
