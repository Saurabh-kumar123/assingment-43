/*5. Write a c++ program, to show that priority queue is by default a Max Heap.
 Note: If elements are printed in descending order, then we have a max heap.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     priority_queue<int> q;
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
