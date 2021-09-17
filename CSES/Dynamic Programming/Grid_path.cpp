#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#define mod 1000000007


using namespace std;



int main() {
    
    int n;
    cin>>n;
    
    bool grid[n+1][n+1];
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char c;
            cin>>c;
            if(c=='.'){
                grid[i][j] = 0;
            }
            else{
                grid[i][j] = 1;
            }
        }
    }

    
    int dp[n+1][n+1];
    
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            
            if(i==n && j==n){
                dp[i][j] = 1;
            }
            else{
                
                if(grid[i][j]){
                    dp[i][j] = 0;
                }
                else{
                    int op1 = (i==n)? 0 : dp[i+1][j];
                    int op2 = (j==n)? 0 : dp[i][j+1];
                    
                    dp[i][j] = (op1 + op2)%mod;
                    // cout<<dp[i][j]<<" ";
                }
                    
            }
            
            
        }
    }
    
    if(grid[n][n]){
        cout<<"0"<<endl;
    }
    else{
        cout<<dp[1][1]<<endl;
    }
    
    return 0;
    
}
