//1. Write a c++ program, to demonstrate priority queue.
#include<bits/stdc++.h>
using namespace std;
void show(priority_queue<int> q)
{
     while(!q.empty())
     {
          cout<<q.top()<<" ";
          q.pop();
     }
}
int main()
{
     priority_queue<int> q;
     for(int i=0;i<4;i++)
          q.push(32+i*2);
     show(q);
    cout<<endl<<"priority queue size : "<<q.size()<<endl;
    cout<<"priority queue top : "<<q.top()<<endl;
    q.pop();
    show(q);
    cout<<endl;
     return 0;
}
