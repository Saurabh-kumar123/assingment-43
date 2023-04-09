/*10.Given an array arr[] of size N and a number K, the task is to find the length of the smallest
 subsequence such that the sum of the subsequence is greater than or equal to number K do it
 using priority queue. Example: Input: arr[] = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5},
  K = 35 Output: 4 Smallest subsequence with the sum greater than or equal to the given
  sum K is {7, 9, 14, 10} Input: arr[] = {1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12}, K = 70 Output:-1
  Subsequence with sum greater than equal to the given sum is not possible.*/
  #include<bits/stdc++.h>
  using namespace std;
  int length(int arr[],int s,int k)
  {
       priority_queue<int> q;
       for(int i=0;i<s;i++)
          q.push(arr[i]);
          int sum=0,ans=0;
       while(!q.empty()&&sum<k)
       {
            sum=sum+q.top();
            q.pop();
            ans++;
       }
       if(sum<k)
          return -1;
       return ans;
  }
  int main()
  {
       int arr[] = {2,3,1,5,6,7,9,14,10,2,5};
       int s = sizeof(arr)/sizeof(arr[0]);
       int k = 35;
       cout<<length(arr,s,k)<<endl;
       return 0;
  }
