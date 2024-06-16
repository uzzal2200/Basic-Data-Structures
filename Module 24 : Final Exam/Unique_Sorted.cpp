#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
       // set<int> s;
       set<int,greater<int> > s;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
           s.insert(x);
             
        }
        vector<int>v;
       for(auto it=s.begin(); it != s.end();it++)
    {
        cout<<*it<<" ";
        // v.push_back(*it);

    }
    //  reverse(v.begin(),v.end());
    //  for(int val: v)
    //  {
    //     cout<<val<<" ";
    //  }
      cout<<endl;
    }
 
    
   
  
    return 0;
}
