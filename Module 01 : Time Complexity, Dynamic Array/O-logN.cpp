#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while(n>0) // O(logN)
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n=n/10;
    // }
    //10^18 and 60 bar loop calate parbe
    for(int i=1;i<=n;i=i*2) // O(logN)
    {
        cout<<i<<endl;
    }
    return 0;
}
