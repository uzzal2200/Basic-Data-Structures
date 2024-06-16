#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={10,20,30,40,50};
    // mylist.push_front(100); // head insert
    // mylist.push_back(100);  //  tail insert
    //mylist.pop_back();     // tail delete
    //mylist.pop_front();      // head delete
   // mylist.insert(next(mylist.begin(),0),100);   // complexity o(N)
   //mylist.insert(next(mylist.begin(),2),{60,70,80});      //multiple insert
    // list<int> newlist={100,200,300};
    // mylist.insert(next(mylist.begin(),2),newlist.begin(),newlist.end());
    // vector<int> v= {100,200,300};
    // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());
   // mylist.erase(next(mylist.begin(),2));   // complexity o(N)
   //mylist.erase(next(mylist.begin(),2),next(mylist.begin(),4));   // complexity o(N) // multiple delete
    // list<int> mylist={10,20,30,40,30,50,30,70};
    // replace(mylist.begin(),mylist.end(),30,100);
    
    // for(int val : mylist)
    // {
    //     cout<<val<<endl;
    // }
    auto it= find(mylist.begin(),mylist.end(),50);
    // cout<<*it<<endl;
    if( it == mylist.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"foud"<<endl;
    }
    return 0;
}
