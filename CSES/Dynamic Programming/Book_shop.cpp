#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;

int main(){

	long long n,w,c;
	cin>>n>>w;

	std::vector<int > price;

	for(int i=0;i<n;i++){
		cin>>c;
		price.push_back(c);
	}
	std::vector<int > pages;

	for(int i=0;i<n;i++){
		cin>>c;
		pages.push_back(c);
	}

// std::vector<std::vector<int>> array_2d(rows, std::vector<int>(cols, 0));

	vector<vector<int>> dp(n+1, vector<int>(w+1, 0));


	for(int i=1;i<n+1;i++){
		for(int j=1;j<w+1;j++){
			if(price[i-1]<=j){
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-price[i-1]] + pages[i-1]);
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	
	

    cout<<dp[n][w]<<endl;
	return 0;
}

