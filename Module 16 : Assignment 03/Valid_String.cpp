#include<bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for(char ch: s)
    {
        if(st.empty())
        {
            st.push(ch);
        }
        else if(ch=='A' && st.top() == 'B')
        {
            st.pop();
        }
        else if(ch=='B' && st.top()=='A')
        {
            st.pop();
        }
        else
        {
         st.push(ch);
        }
    }
    return st.empty();
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++)
    //while(t--)
    {
        string s;
        getline(cin,s);
        if(isValid(s))
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
