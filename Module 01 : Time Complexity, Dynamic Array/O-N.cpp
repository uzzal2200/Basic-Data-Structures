#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)// O(N)----10^7
    {
        cin>>a[i];
    }
    int s=0;
    for(int i=0;i<n;i++)//O(N)
    {
        s=s+a[i];
    }
    cout<<s;
    return 0;
}
