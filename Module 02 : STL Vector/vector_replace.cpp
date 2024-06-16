#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,2,3,45,67,8,4,2};
    replace(v.begin(),v.end()-1,2,100); // jody v.end() hoi tahole proti last number porjontu jabe
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
