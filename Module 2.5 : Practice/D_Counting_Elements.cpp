#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
         
    }
    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i] != v[i+1])
        {
        if(binary_search (v.begin(),v.end(),v[i]+1))
            {
                cnt++;
            }
         
            }

        
        
        }
    }
    cout<<cnt;
    return 0;
}
