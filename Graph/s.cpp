#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;

int main(){

    int n;
    cin>>n;

    int grid[n+1][n+1];

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

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            if(i==n && j==n){
                dp[i][j] = 1;
            }
            else{
                if(grid[i][j]){
                    dp[i][j] = 0;
                }
                else{
                    int op1 = (i==n)? 0 : dp[i-1][j];
                    int op2 = (j==n)? 0 : dp[i][j-1];

                    dp[i][j] = (op1 + op2)%mod;
                }
            }
        }
    }

    if(grid[n][n] == 1){
        cout<<"0"<<endl;
    }
    else{
        cout<<dp[1][1]<<endl;
    }

    return 0;
}


