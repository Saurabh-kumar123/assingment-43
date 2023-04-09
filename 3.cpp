//3. Write a c++ program, to demonstrate priority queue having a min element at top.
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
     return 0;
}
