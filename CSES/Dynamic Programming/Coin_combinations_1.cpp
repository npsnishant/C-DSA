#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

int main(){

	long long n,x,c;
	cin>>n>>x;

	std::vector<long long > coin;

	for(int i=0;i<n;i++){
		cin>>c;
		coin.push_back(c);
	}

	std::vector<long long> dp(x+1, 0);
    
//we make upper loop to make the sum is equal to x;

    dp[0] = 1;
    
	for(int i=1;i<=x;i++){
		for(int j=0;j<n;j++){
			if(coin[j]<=i){
				dp[i] = (dp[i] + dp[i-coin[j]]) % mod;
			}
		}
	}

  
    cout<<dp[x]<<endl;
	return 0;
}

