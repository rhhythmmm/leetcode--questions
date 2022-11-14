#include<iostream>
#include<vector>
using namespace std;

//top down approach
int fibb(int n, vector<int>&dp){
    if(n==0||n==1){
        return n;
    }
    
    if(dp[n]!=-1){
        return dp[n];
    }
    
    return dp[n] = fibb(n-1,dp) + fibb(n-2,dp);
}

//bottom up approach
int fib(int n, vector<int>&dp){
    dp[0]=0;
    dp[1]=1;
    
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    return dp[n];
}

//space opti
int fibbb(int n){
    int prev1 = 0;
    int prev2 = 1;
        for(int i=2; i<=n; i++){
            int curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }    
    return prev2;
}

int main()
{
        int n;
        cin>>n;
        vector<int>dp(n+1);
        for(int i=0; i<=n; i++){
            dp[i]=-1;
        }
        cout << fibb(n,dp) <<endl;
}