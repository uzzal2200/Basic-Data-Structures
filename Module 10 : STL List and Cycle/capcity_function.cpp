#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist ={10,20,30,40};
    // mylist.clear();
     mylist.resize(2);
     mylist.resize(5,30);
    cout<<mylist.size()<<endl;
    cout<<mylist.max_size()<<endl;
   
     for(int val : mylist)
     {
        cout<<val<<endl;
     }
    return 0;
}
