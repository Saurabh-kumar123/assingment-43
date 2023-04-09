/*2. Implement different operations on priority queue .i.e.
adding element, removing element, size of priority queue, and print it.*/
#include<bits/stdc++.h>
using namespace std;
void show(priority_queue<int,vector<int>,greater<int>> q)
{
     while(!q.empty())
     {
          cout<<q.top()<<" ";
          q.pop();
     }
     cout<<endl;
}
int main()
{
     priority_queue<int,vector<int>,greater<int>> q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     show(q);
     q.pop();
     cout<<"after removing element"<<endl;
     show(q);
     cout<<endl<<"size of the queue is : "<<q.size()<<endl;
     cout<<endl<<"top element of the queue is : "<<q.top()<<endl;
     return 0;
}

