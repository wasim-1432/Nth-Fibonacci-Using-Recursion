#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int SOlve(int n,vector<int> &dp)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n]=SOlve(n-1,dp)+SOlve(n-2,dp);
        return dp[n];
    }
    int nthFibonacci(int n) {
        // code here
        vector<int> dp(n+1,-1);
        return SOlve(n,dp);
    }
};