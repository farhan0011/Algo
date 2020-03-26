#include<bits/stdc++.h>
using namespace std;
#define LIM 1005
int A[LIM];
int n;
int dp[LIM][LIM];
int f(int in,int last)
{
    if(in == n)
        return 0;
        if(dp[in][last] != -1)
            return dp[in][last];
    int a = 0,b = 0 ;
    if(last < A[in])
    {
        a = 1 + f(in + 1, A[in]);
    }
     b = f(in + 1, last);
    dp[in][last] = max(a,b);
}
int main()
{
    //int n;
    memset(dp, -1 , sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
    cout<<f(0,0)<<endl;
}

