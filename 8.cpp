/*8. Given an array arr[] of N elements, the task is to perform using priority queue and the following operation:
 ● Pick the two largest element from the array and remove these element.
 If the elements are unequal then insert the absolute difference of the elements into the array.
 ● Perform the above operations until the array has 1 or no element in it.
 If the array has only one element left then print that element,
  else print “-1”. Example: Input: arr[] = { 3, 5, 2, 7 } Output:
     1 Explanation: The two largest elements are 7 and 5. Discard them.
     Since both are not equal, insert 7 – 5 = 2 into the array. Hence, arr[] = { 3, 2, 2 }
 The two largest elements are 3 and 2. Discard them. Since both are not equal, insert 3 – 2 = 1 into the array.
Hence, arr[] = { 1, 2 } The two largest elements are 2 and 1.
Discard them. Since both are not equal, insert 2 – 1 = 1 into the array.
Hence, arr[] = { 1 } The only element left is 1. Print the value of the only element left.*/

  #include<bits/stdc++.h>
  using namespace std;
  void final_element(int ar[],int s)
  {
       priority_queue<int> q;
       for(int i=0;i<s;i++)
          q.push(ar[i]);
          while(q.size()>1)
          {
                int x = q.top();
                q.pop();
              int y = q.top();
               q.pop();
             if(x!=y)
               {
                int xy = abs(x-y);
                q.push(xy);
                }

          }
                if(q.size()==1)
                   cout<<q.top()<<endl;
                  else
                cout<<"-1 "<<endl;

  }
  int main()
  {
       int ar[]={3,5,2,7};
       int s = sizeof(ar)/sizeof(ar[0]);
       final_element(ar,s);
       return 0;
  }
