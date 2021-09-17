#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

int main(){

	long long n;
	cin>>n;

	std::vector<int> dp(n+1, 0);

	//dp[i] = Number of valid ways of throwing the dice such that the sum = i.

	dp[0] = 1;

	for(int i=1;i<=n;i++){
		for(int x=1; x<=6;x++){
			if(x>i){
				break;
			}

			dp[i] = (dp[i] + dp[i-x]) % mod;
		}
	}

	cout<<dp[n]<<endl;
	return 0;
}