#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool subsetsum(int arr[], int sum, int n){
	bool t[n+1][sum+1];

	for(int i=0;i<n+1;i++){
		for(int j=0;j<sum+1;j++){
			if(i==0){
				t[i][j] = false;
			}
			if(j==0){
				t[i][j] = true;
			}
		}
	}

	for(int i=1;i<n+1;i++){
		for(int j=1;j<sum+1;j++){
			if(arr[i-1]<=j){
				t[i][j] =  t[i-1][j-arr[i-1]] || t[i-1][j];
			}
			else{
				t[i][j] =  t[i-1][j];
			}
		}
	}

	vector<int>v;
	int mn = INT_MAX;

		for(int j=0;j<(sum+1)/2;j++){
			if(t[3][j] == true){
				v.push_back(j);
			}
		}

	for(int i=0;i<v.size();i++){
		mn = min(mn, sum-2*v[i]);
	}

	cout<<mn<<endl;
	return 0;
}


int main(){

	int n,sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		sum = sum+arr[i];
	}

	subsetsum(arr, sum, n);
	return 0;
}
