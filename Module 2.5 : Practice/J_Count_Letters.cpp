#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> frequency(26,0);
    for(char i:s)
    {
        frequency[i-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
      if(  frequency[i-'a']>0)
      {
        cout<<i<<" : "<<frequency[i-'a']<<endl;
      }
    }
    return 0;
}
