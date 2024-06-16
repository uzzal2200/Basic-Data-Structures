#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,56,6};
    //cout<<v[v.size()-1]<<endl;// ata use korbo na
    cout<<v.back()<<endl; //amra ata use korbo ata easy and time kom lagbe
    cout<<v[0]<<endl;// ata use korbo shomoy kom lage
    //cout<<v.front();// ata use korbo na
    //for(auto it=v.begin();it<v.end();it++)
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
