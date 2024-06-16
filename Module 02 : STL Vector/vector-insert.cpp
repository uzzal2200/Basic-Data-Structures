#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={12,13,14,34,25};
   // a.insert(a.begin()+2,10);

    vector<int> v1={1,2,3,4,5};
   // a.insert(a.begin()+2,v1.begin(),v1.end());
   a.insert(a.end(),v1.begin(),v1.end());

    for(int v: a)
    {
        cout<<v<<" ";
    }
    return 0;
}
