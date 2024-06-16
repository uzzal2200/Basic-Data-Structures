#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        int a[k];
        for(int j=0;j<k;j++)
        {
            cin>>a[j];
        }
        bool sorted=true;
        for(int j=1;j<k;j++)
        {
        if(a[j]<a[j-1])
        {
        sorted=false;
        break;
        }
        }
        if(sorted)
        {
            cout<<"YES"<<endl;
        }
        else
        {
         cout<<"NO"<<endl;
        }
        
        //sort(a,a+k);
    }
    
    
  
    return 0;
}
