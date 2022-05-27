#include <iostream>
#include<set>
using namespace std;

int main()
{
    
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(8);
    s.insert(7);
    s.insert(6);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    
    cout<<s.size()<<endl;
    
    for(int i:s)
    cout<<i<<endl;
    
   cout<<endl<<s.count(10);  // element exists or not
 
