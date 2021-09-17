#include <iostream>
#include <bits/stdc++.h>

using namespace std;

LCS(string a, string b, int m, int n){
    int t[m+1][n+1], ans=0;

	for(int i=0;i<m+1;i++){
		for(int j=0;j<m+1;j++){
			t[i][j] = 0;
		}
	}

	for(int i=1;i<m+1;i++){
		for(int j=1;j<n+1;j++){
			if(a[i-1] == b[j-1]){
				t[i][j] = 1 + t[i-1][j-1];
				ans = max(ans, t[i][j]);
			}
			else{
				t[i][j] = 0;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

int main(){

	string a,b;
	cin>>a>>b;
	LCS(a, b, a.length(), b.length());
	return 0;
}
