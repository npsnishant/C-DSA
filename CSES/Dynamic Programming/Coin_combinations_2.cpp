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


// isme hm decide krenge ki hm kisi coins se kitne tariko se x1,x2,x3 bna skte ho
// pichle problem me hm x(sum)  ko n tukdo me baat rhe the then in this we add all possible combinations



	std::vector<long long> dp(x+1, 0);

	dp[0] = 1;

	for(int i=0;i<n;i++){
		for(int j=1;j<=x;j++){
			if(coin[i]<=j){
				dp[j] = (dp[j]+dp[j-coin[i]])%mod;
			}
		}
	}

	cout<<dp[x]<<endl;
	return 0;
}