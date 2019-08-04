#include<bits/stdc++.h>
using namespace std;
int merger(int arr[],int l,int mid,int r,int c)
{
    cout<<"l= "<<l<<" mid= "<<mid<<" r= "<<r<<" c = "<<c<<endl;
    int temp[r+l+1];
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
            c+=mid-i+1;
        }
    }
    while(i<=mid)
        {
            temp[k]=arr[i];
            i++,k++;
        }
    while(j<=r)
        {
            temp[k]=arr[j];
            j++,k++;
        }
    for(int i=l;i<=r;i++)
        {
            //cout<<temp[i]<<" ";
            arr[i]=temp[i];
        }
        cout<<c<<endl;

    return c;
}
int mergesort(int arr[],int l,int r,int c)
{
    if(l==r)
        return 0;
    int mid=(l+r)/2;
    c=mergesort(arr,l,mid,c);
    c+=mergesort(arr,mid+1,r,c);
    c=merger(arr,l,mid,r,c);
    return c;
}
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=mergesort(arr,0,n-1,0);
    cout<<ans<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
