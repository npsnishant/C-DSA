#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		long long n,num=INT_MIN, sum=0;
		cin>>n;
		long long arr[n];

		for(long long i=0;i<n;i++){
			cin>>arr[i];
		}

		for(long long i=0;i<n;i++){
			sum = sum+arr[i];
			if(sum<0){
				sum = 0;
			}
			if(num<sum){
				num = sum;
			}
		}

		for(long long i=0;i<n;i++){
			if(arr[i]>=0){
				tot = tot+arr[i];
			}
		}

		sort(arr, arr+n);


		if(num<=0){
			num = arr[n-1];
		}

		if(tot<=0){
			tot = arr[n-1];
		}

		cout<<num<<" "<<tot<<endl;
	}
	return 0;
}