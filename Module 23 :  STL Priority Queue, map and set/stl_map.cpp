#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["shakib"]=75;
    mp["shakib al hasan"]=78;
    mp["sumon"]=35;
    mp["Robin"]=55;
    
    for(auto it=mp.begin(); it != mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    // cout<<mp["tamim"]<<endl;
    return 0;
}
