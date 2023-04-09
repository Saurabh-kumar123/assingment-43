/*7. Given two sorted arrays A[] and B[] of sizes N and M respectively,
the task is to merge them in a sorted manner using priority queue.
Example: Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 } Output:  4 5 6 7 8 8*/
#include<bits/stdc++.h>
using namespace std;
void merg(int A[],int B[],int N,int M)
{
     int merg[N+M];
     priority_queue<int,vector<int>,greater<int>> q;
     cout<<endl<<"first array is  :  ";
     for(int i=0;i<N;i++)
     {
           cout<<A[i]<<" ";
           q.push(A[i]);

     }
     cout<<endl;
         cout<<endl<<"second array is  :  ";
     for(int i=0;i<M;i++)
     {
           cout<<B[i]<<" ";
           q.push(B[i]);

     }
    cout<<endl<<endl;
    cout<<"merge & sort two array  :  ";
    int j = 0;
   while(!q.empty())
    {
         merg[j++] = q.top();
         q.pop();
    }
    for(int i=0;i<N+M;i++)
     cout<<merg[i]<<" ";

    cout<<"\n\n";
}
int main()
{
     int A[]={3,8,11,7};
     int B[]={13,5,1,10};
     int N = sizeof(A)/sizeof(A[0]);
     int M = sizeof(B)/sizeof(B[0]);
     merg(A,B,N,M);
     return 0;
}
