#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={10,20,30,40};
    a.pop_back();
    a.pop_back();
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    
    //vector<int> v={1,2,3};
    // v=a; //O(n)
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    

     return 0;
}
