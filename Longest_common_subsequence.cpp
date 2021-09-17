#include <iostream>
#include <bits/stdc++.h>

using namespace std;


LCS(string x, int m, int n){
    int t[m+1][n+1];

	for(int i=0;i<m+1;i++){
		for(int j=0;j<n+1;j++){
			if(i==0 || j==0){
				t[i][j] = 0;
			}
		}
	}

	for(int i=1;i<m+1;i++){
		for(int j=1;j<n+1;j++){
			if(x[i-1] == x[j-1] && i!=j){
				t[i][j] = 1 + t[i-1][j-1];
				}
			else{
				t[i][j] = max(t[i-1][j], t[i][j-1]);
			}
		}
	}
	cout<<t[m][n]<<endl;
	return 0;
}

int main(){

	string x;
	cin>>x;
	LCS(x, x.length(), x.length());

	return 0;
}
