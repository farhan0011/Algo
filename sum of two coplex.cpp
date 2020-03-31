#include<bits/stdc++.h>
using namespace std;
struct cplx
{
    int a,b;
    cplx(){}
    cplx(int aa,int bb)
    {
        a = aa;
        b = bb;
    }
    cplx operator + (const cplx &q) const{

        cplx ans;
        ans.a = a + q.a;
        ans.b = b + q.b;
        return ans;
    }
};
int main()
{
    cplx u,v,w;
    cin>>u.a>>u.b;
    cin>>v.a>>v.b;
    w = u + v;
    cout<<w.a<<" "<<w.b<<endl;
}
