/*9. Given three arrays X[], Y[], and Z[] each consisting of N integers,
 the task is to find the maximum number of triplets (X[i], Y[i], Z[i]) such that
 (X[i] < Y[i] < Z[i]) for any permutation of the three arrays using priority queue
  Input: X = {9, 6, 14, 1,  8}, Y = {2, 10, 3, 12, 11}, Z = {15, 13, 5, 7, 4} Output: 3 Explanation:
   After rearranging the arrays X[], Y[] and Z[] as {1, 6, 8, 9, 14}, {3, 2, 10, 12, 11},
    and {4, 7, 15, 13, 5} respectively. The increasing triplets are {1, 3, 4}, {8, 10, 15} and {9, 12, 13}.
     Therefore, the total count of such triplets is 3.*/

  #include<bits/stdc++.h>
  using namespace std;
  int  finalelement(int X[],int Y[],int Z[],int n)
  {
        sort(X,X+n);
        int cot=0;
       for(int i=0;i<n;i++)
       {
            int x=X[i];
            priority_queue<int,vector<int>,greater<int>> y,z;
            for(int i=0;i<n;i++)
            {
                 y.push(Y[i]);
                 z.push(Z[i]);
            }

               while(!y.empty()&&y.top()<=x)
                    y.pop();
               if(y.empty())
                    break;
                 y.pop();
               while(!z.empty()&&z.top()<=x)
                    z.pop();
               if(z.empty())
                    break;
                z.pop();
               ++cot;
       }
       return cot;
  }
  int main()
  {
       int X[]={9,6,14,1,8};
       int Y[]={2,10,3,12,11};
       int Z[]={15,13,7,4,5};
       int n = sizeof(X)/sizeof(X[0]);
       cout<<finalelement(X,Y,Z,n);
       return 0;
  }
