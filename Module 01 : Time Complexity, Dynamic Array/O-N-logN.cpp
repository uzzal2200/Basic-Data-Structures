#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int x=i;
        while(x>0)
        {
            int digit=x%10;
            cout<<digit<<" ";
            x=x/10;
        }
        cout<<endl;
    }
    return 0;
}
// jody 2s time dey tahole 10^6 porjontu O(Nlog(N)) loop calano jabe
// jod 1s time dey tahole 10^5 porjontu O(Nlog(N)) loop calano jabe