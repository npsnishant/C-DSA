// #include <iostream>
// #include <bits/stdc++.h>
// #define mod 1000000007



// using namespace std;

// int main(){

// 	long long n,x,c;
// 	cin>>n>>x;

// 	std::vector<long long > coin;

// 	for(int i=0;i<n;i++){
// 		cin>>c;
// 		coin.push_back(c);
// 	}

// 	std::vector<long long> dp(x+1, 0);

// 	for(int i=1;i<=x;i++){
// 		dp[i] = INT_MAX;
// 		for(int j=0;j<n;j++){
// 			if(coin[j]<=i){
// 				dp[i] = min(dp[i], dp[i-coin[j]] + 1);
// 			}
// 		}
// 	}

  
//     if(dp[x]>=INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<dp[x]<<endl;
//     }
// 	return 0;
// }


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

	std::vector<long long> dp(x+1, INT_MAX);

	//base case
	dp[0] = 0;

	for(int i=1;i<=x;i++){
		for(int j=0;j<n;j++){
			if(coin[j]<=i){
				dp[i] = min(dp[i], dp[i-coin[j]] + 1);
			}
		}
	}

  
    if(dp[x]>=INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<dp[x]<<endl;
    }
	return 0;
}



