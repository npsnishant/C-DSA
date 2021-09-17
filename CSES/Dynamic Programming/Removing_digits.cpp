#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007



using namespace std;

int main(){

	long long n;
	cin>>n;

	std::vector<long long> dp(n+1, INT_MAX);

	//base case
	dp[0] = 0;

	for(int i=0;i<=n;i++){
		for(char c : to_string(i)){
			dp[i] = min(dp[i], dp[i-(c-'0')] + 1);
		}
	}

	cout<<dp[n]<<endl;
	return 0;
}
