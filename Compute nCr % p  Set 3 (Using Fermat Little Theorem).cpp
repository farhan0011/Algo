#include<bits/stdc++.h>
using namespace std;
int power(int x, int y, int p)
{
    int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
int modInv(int x,int m)
{
    return power(x,m-2,m);
}
int nCrModPFermat(int n, int r, int p)
{
    if(r==0)
        return 1;
    int fact[n+1];
    fact[0]=1;
    for(int i=1;i<=n;i++)
        fact[i]=fact[i-1]*i%p;
    return (fact[n]*modInv(fact[r],p)%p*modInv(fact[n-r],p)%p)%p;
}
int main()
{
    ///nCr%p=fact(n)%p*modInv(fact(r))*modInv(fact(n-r))%p;
    ///midInv()=x^(m-2)%m)
    int n,r,p;
    cin>>n>>r>>p;
    int ans=nCrModPFermat(n, r, p);
    cout<<ans<<endl;
}
