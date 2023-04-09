//4. Write a c++ program, to swap the elements of two priority queues of int type.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     priority_queue<int,vector<int>,greater<int>> q1,q2;
     q1.push(10);
     q1.push(20);
     q1.push(30);
     q1.push(40);

     q2.push(1);
     q2.push(2);
     q2.push(3);
     q2.push(4);
     q1.swap(q2);
     cout<<endl;
     while(!q2.empty())
     {
          cout<<q2.top()<<" ";
          q2.pop();
     }
     return 0;
}
