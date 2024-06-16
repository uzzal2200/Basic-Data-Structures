#include<bits/stdc++.h>
int getFourthLargest(int arr[], int n)
{
    // Write your code here.
    if(n<4)
    {
        return INT_MIN;
    }
  priority_queue<int, vector<int>, greater<int>> pq;
   for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
            if(pq.size() > 4)
            {
                pq.pop();
            }
            
        }
    return pq.top();
}