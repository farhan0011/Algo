#include<bits/stdc++.h>
using namespace std;
#define max 100000
int kmp[max];
void build_failure_table(string pat,int m)
{
    kmp[0]=0;
    kmp[1]=0;
    for(int i=2;i<=m;i++)
    {
        int j=kmp[i-1];
        while(1)
        {
            if(pat[j]==pat[i-1])
            {
                kmp[i]=j+1;
                break;
            }
            if(j==0)
            {
                kmp[i]=0;
                break;
            }
            j=kmp[j];
        }
    }
}
bool res(string text,string pat)
{
    int n=text.size(),m=pat.size();
    build_failure_table(pat,m);
    int i=0,j=0;
    while(1)
    {
        if(j==n)
            return false;
        if(text[j]==pat[i])
        {
            i++,j++;
            if(i==m)
                return true;
        }
        else
        {
            if(i==0)
                j++;
            else
            {
                i=kmp[i];
            }
        }
    }

}
int main()
{
    string t,p;
    cin>>t>>p;
    if(res(t,p))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
