#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int x;
    cin>>x;
    int ans[n+m];
    for(int i=0;i<n;i++)
    {
        ans[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        ans[x+i]=b[i];
    }
    for(int i=x;i<n;i++)
    {
        ans[m+i]=a[i];
    }
   
    for(int i=0;i<n+m;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
