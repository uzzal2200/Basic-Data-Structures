#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int current_index=v.size() - 1;
     //cout<<current_index<<endl;
    
    // cout<<parent_index<<endl;
    while(current_index != 0)
    {
     int parent_index=(current_index - 1) /2;
    if(v[current_index] > v[parent_index])
    {
        swap(v[parent_index],v[current_index] );

    }
     else 
     break;
     current_index=parent_index;
    }
    for(int val: v)
    {
        cout<<val<<" ";
    }
    return 0;
}
