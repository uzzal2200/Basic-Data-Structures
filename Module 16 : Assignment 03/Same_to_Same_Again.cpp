#include<bits/stdc++.h>
using namespace std;
class Stack
{
 public:
 vector<int> v;
 void push(int val)
 {
    v.push_back(val);
 }
 void pop()
 {
    v.pop_back();
 }
 int top()
 {
    return v.back();
 }
 int size()
 {
    return v.size();
 }
 bool empty()
 {
    if(v.size() == 0) return true;
    else return false;
 }
};
class Queue
{
    public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);

    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if(l.size()==0) return true;
        else return false;
    }
};
int main()
{
    Stack s,s1;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++ )
    {
        int x;
        cin>>x;
        s.push(x);
    }
    
    // while(!s.empty())
    // {
    //  s1.push(s.top());
    //  s.pop();
     
    // }
    
    Queue q,q1;
    for(int i=0;i<m;i++)
    {
        int b;
        cin>>b;
        q.push(b);
    }
    // while(!q.empty())
    // {
    //     q1.push(q.front());
    //     q.pop();
    // }
  bool same=true;
  while(!s.empty() && !q.empty())
  {
    if(s.top() != q.front())
    {
        same=false;
        break;
    }
    s.pop();
    q.pop();

  }
  if(!s.empty() || !q.empty())
  {
    same=false;
  }
  if(same) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
   
    return 0;
}
