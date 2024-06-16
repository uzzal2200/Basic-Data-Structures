#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
 stack<int> s;
 for(int i=0;i<k;i++)
 {
     s.push(q.front());
     q.pop();
 }
  while(!s.empty())
  {
      q.push(s.top());
      s.pop();

  }
  int n=q.size();
  int sub=n-k;
  for(int i=0;i<sub;i++)
  {
      q.push(q.front());
      q.pop();
  }
  return q;

}
