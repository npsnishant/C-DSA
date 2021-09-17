#include <iostream>
#include <bits/stdc++.h>

int static t[2002][2002];

using namespace std;

int LCS(string x, string y, int m, int n){
	if(m==0 || n==0){
		return 0;
	}

	if(t[m][n]!=-1){
		return t[m][n];
	}

	if(x[m-1] == y[n-1]){
		return t[m][n] =  1 + LCS(x, y, m-1, n-1);
	}
	else{
		return t[m][n] =  max(LCS(x, y, m-1, n), LCS(x, y, m, n-1));
	}

	return t[m][n];
}


int main(){

	memset(t, -1, sizeof(t));
	string x,y;
	cin>>x>>y;
	LCS(x, y, x.length(), y.length());
	return 0;
}