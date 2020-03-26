#include<bits/stdc++.h>
using namespace std;
string s;
int dp[1010];
int dr[1010];
char ch[1010];
unordered_set<string>us;
void f(int in,int take)
{
    if(s[in] == '\0')
    {
        ch[take] = '\0';
        if(strlen(ch) >0)
        us.insert(ch);
        take = 0;
        return ;
    }

        ch[take] = s[in];
        f(in + 1, take + 1);
        f(in + 1, take);
        return ;
}
int g(int in)
{
    if(in == s.size())
        return 0;
    if(dp[in] != -1)
        return dp[in];
    int a = 1 + g(in +1);
    int b = g(in + 1);
    return dp[in] = a + b;
}
int main()
{
    memset(dp, -1 ,sizeof dp);
    memset(dr, -1 ,sizeof dr);
    cin>>s;
    f(0,0);
    cout<<us.size()<<endl;
    for(auto it = us.begin(); it!=us.end(); it++)
    cout<<(*it)<<endl;
    cout<<g(0)<<endl;
}
