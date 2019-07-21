#include<bits/stdc++.h>
using namespace std;
int c;
void marge(int a[],int n,int mid,int m)
{
    c++;
    int l=mid-n+1,r=m-mid;
    int L[l],R[r];
    for(int i=0;i<l;i++)
        L[i]=a[n+i];
    for(int i=0;i<r;i++)
        R[i]=a[mid+1+i];
    int i=0,j=0,k=n;
    while(i<l&&j<r)
    {
        if(L[i]<=R[j])
            a[k++]=L[i++];
        else
            a[k++]=R[j++];
    }
    while(i<l)
        a[k++]=L[i++];
    while(j<r)
        a[k++]=R[j++];
}
void test(int a[],int n,int m)
{
    if(n==m)
        return ;
        int st=n,ft=m;
    int mid=(st+ft)/2;
    test(a,st,mid);
    test(a,mid+1,ft);
    marge(a,st,mid,ft);
}
int main()
{
    int a[]={1,10,9,50,78,};
    int b[]={2,4,7,9,10};
    test(a,0,4);
    for(int i=0;i<4;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        cout<<c<<endl;
}
