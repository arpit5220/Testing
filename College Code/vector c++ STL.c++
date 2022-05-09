

#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // cout<<"capacity"<<v.capacity()<<"\n";
    // v.push_back(2);
    // cout<<"capacity"<<v.capacity()<<"\n";
    // v.push_back(7);
    // cout<<"capacity"<<v.capacity()<<"\n";
    // for(int val:v)
    // {
    //     cout<<val<<" ";
    // }
    
    // cout<<endl;
    // cout<<v.at(1);
    // cout<<endl;
    // cout<<v[2];
    // cout<<endl<<"size is "<<v.size();
    
    //  v.clear();
    //  cout<<"\n";
    //  cout<<"capacity "<<v.capacity()<<"\n";
    //  cout<<"size is "<<v.size()<<"\n";
    
    // vector<int> v(5,1);          // -->>> new program
    // cout<<v.size()<<"\n";
    // for(int val:v)
    // {
    //      cout<<val<<" ";
    //  }
    
    
    
    //--> new program
    // vector<int> v;
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(8);
    
    // v.pop_back();   //--> delete last value
    
    // for(int val:v)
    //  {
    //       cout<<val<<" ";
    //   }
      
      
      // --> new program
    //   vector<int> v;
    //   v.push_back(4);
    //  v.push_back(5);
    //  v.push_back(8);
     
    //  vector<int> v2(v);   // --> copy in a new vector
    //   for(int val:v2)
    //   {
    //       cout<<val<<" ";
    //   }
      
      
      // --> new program of graph
      
     
      int n,m;
      cout<<"input no of vertices";
      cin>>n;
      cout<<"input no of edges";
      cin>>m;
      vector<int> adj[n];
      for(int i=1;i<=m;i++)
      {
          int a,b;
          cout<<"input the end point of "<<i<<"the edge";
          cin>>a>>b;
          adj[a].push_back(b);
          adj[b].push_back(a);
          
      }
      
     /* for(int j=0;j<=n-1;j++)
      {
          cout<<endl<<j<<" ";
          for(int k=0;k<adj[j].size();k++)
          {
              cout<<adj[j][k]<<",";
          }
          
      }*/
      
      
      
      
      cin>>n;
      queue<int> q;
      vector<int> v[n];
      
      v[0]=1;
      q.push(0);
      while(!q.empty())
      {
          int a=q.front();
          q.pop();
          for(int i=0;i<adj[a].size();i++)
          {
              int b=adj[a][i];
              if(v[b]==0)
              {
                  v[b]=1;
                  q.push(b);
              }
          }
          
          cout<<a;
      }
      
      
    
     
     
    
     
}
