#include<bits/stdc++.h>
using namespace std;
struct info
{
    int w, v;
    info(){}
    info(int ww,int vv)
    {
        w = ww;
        v = vv;
    }
    bool operator < (const info &p)const{
         return 1.0 * v/w > 1.0 * p.v/p.w;
    }
};
int main()
{
    int n;
    cin>>n;
    info A[n];
    for(int i=0;i<n;i++)
        cin>>A[i].w>>A[i].v;
    int cap;
    cin>>cap;
    sort(A,A+n);
    for(int i=0;i<n;i++)
        cout<<A[i].w<<" "<<A[i].v<<endl;
    double ans =0;
    for(int i=0;i<n;i++)
    {
        if(A[i].w<=cap)
        {
            ans += A[i].v;
            cap = cap - A[i].w;
        }
        else
        {
            double rat = (1.0 * A[i].v)/(1.0 * A[i].w);
            ans+= (rat *cap);
            cap = 0;
        }
    }
    cout<<ans<<endl;
}
