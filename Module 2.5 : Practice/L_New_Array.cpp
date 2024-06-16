#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int n;
    cin>>n;
    vector<int> v1(n);
  
    for(int i=0;i<n;i++)
{
    cin>>v1[i];
    
}
// for(int val:v1)
// {
//     cout<<val<<" ";
// }
// cout<<endl;
vector<int> v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    // for(int cal:v2)
    // {
    //     cout<<cal<<" ";
    // } 
    
    v2.insert(v2.end(),v1.begin(),v1.end());
    for(int val:v2)
    {
        cout<<val<<" ";
    }
    return 0;
}
