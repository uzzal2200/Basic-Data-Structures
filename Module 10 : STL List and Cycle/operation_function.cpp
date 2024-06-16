#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={20,30,50,30,30,60,70};
    //mylist.remove(30);
    //mylist.sort();  // assending order
    // mylist.sort(greater<int>()); // decending order
      mylist.unique();   // age sort kore nite hove then duplicate list number delete korte hobe
   // mylist.reverse();
    for(int val : mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}

