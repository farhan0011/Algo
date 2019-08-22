#include<bits/stdc++.h>
using namespace std;
void seive(int n)
{
    vector<int>v;

    int prime[n+1]={0};
    for(int i=2;i*i<=n;i++)
    {
        if(!prime[i])
        {
            v.push_back(i);
            for(int j=i*i;j<=n;j=j+i)
                prime[j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(prime[i]==0)
            cout<<i<<" ";
    }
    cout<<endl;

}
int main()
{
    int n;
    cin>>n;
    seive(n);
}
