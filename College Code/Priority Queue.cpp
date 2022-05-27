#include <iostream>
#include<queue>
using namespace std;

int
main ()
{
  priority_queue < int >pq;
//   pq.push (5);
//   pq.push (6);
//   pq.push (7);
//   pq.push (2);
//   pq.push (3);
//   pq.push(4);  
//   pq.push (3);
//   pq.push(5);
//   pq.push(1);
  
//   cout<<pq.size()<<endl;
//   int n=pq.size();
//   for(int i=1;i<=n;i++)
//   {
//       cout<<pq.top()<<endl;
//       pq.pop();
//   }
  
//   while(pq.empty()!=1)
//   {
//       cout<<pq.top()<<endl;
//       pq.pop();
//   }

    
     pq.push(-1);        // max priority queue
     pq.push(-2);
     pq.push(-3);
     pq.push(-4);
     
     while(pq.empty()!=1)
     {
         cout<<(-pq.top())<<endl;
         pq.pop();
     }
  

}
