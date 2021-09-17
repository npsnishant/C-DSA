#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int LCS(string x, string y, int m, int n){
	if(m==0 || n==0){
		return 0;
	}

	if(x[m-1] == y[n-1]){
		return 1 + LCS(x, y, m-1, n-1);
	}
	else{
		return max(LCS(x, y, m-1, n), LCS(x, y, m, n-1));
	}

	return t[m][n];
}


int main(){

	string x,y;
	cin>>x>>y;
	LCS(x, y, x.length(), y.length());
	return 0;
}