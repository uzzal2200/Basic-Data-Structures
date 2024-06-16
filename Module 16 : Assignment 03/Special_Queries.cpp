#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    queue<string> q;
    for(int i=0;i<Q;i++)
    {
        int command;
        cin>>command;
        if(command == 0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
        else if(command == 1)
        {
            if(q.empty())
            {
                 cout<<"Invalid"<<endl;
            }
            else 
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}
