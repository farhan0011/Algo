#include<bits/stdc++.h>
using namespace std;
#define LIM 10005
int tree[4*LIM];
int arr[LIM];
//void cr_tree(int node,int st, int ed)
//{
//    if(st == ed)
//    {
//        tree[node] = arr[st];
//        return;
//    }
//    int le = node*2;
//    int rg = 1 + node*2;
//    int md = (st + ed)/2;
//    cr_tree(le,st,md);
//    cr_tree(rg,md+1,ed);
//    tree[node] = tree[le] + tree[rg];
//
//}
//int query(int node,int b,int e,int i,int j)
//{
//    if(b>j || e<i)
//        return 0;
//    if(b>=i && e<=j)
//        return tree[node];
//        int le = node * 2;
//        int rg = 1 + node * 2;
//        int md = (b+e)/2;
//    return(query(le,b,md,i,j)+query(rg,md+1,e,i,j));
//}
/////update er complexity log(n) cause every level e change hoi ekta...r level number holo log(n)
//void update(int node,int b,int e,int i,int new_value)
//{
//    if(i>e || i<b)
//        return ;
//    if(b>=i && e<=i)
//    {
//        tree[node] = new_value;
//        return ;
//    }
//    int le = node *2;
//    int rg = 1 + node * 2;
//    int md = (b+e)/2;
//    update(le,b,md,i,new_value);
//    update(rg,md+1,e,i,new_value);
//    tree[node] = tree[le]+tree[rg];
//}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //cr_tree(1,1,n);
    int q;
    int x ;
    cin>>q;
    while(q--)
    {
        cin>>x;
        if(x == 1)
        {
            int l,r;
            cin>>l>>r;
            //cout<<query(1,1,n,l,r)<<endl;
        }
        else
        {
            int i,value;
            cin>>i>>value;
            //update(1,1,n,i,new_value);

        }
    }
}
