//6. Write a c++ program, to use priority queue to implement min heap.

#include<bits/stdc++.h>
using namespace std;
int main()
{
     priority_queue<int,vector<int>,greater<int>> q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     cout<<"print top element is : "<<q.top()<<endl;
     while(!q.empty())
           {
                cout<<q.top()<<" ";
                q.pop();
           }
     return 0;
}
