#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

// #define long long ll;
using namespace std;

int main() {
	// your code goes here
	long long count=0,n;
	cin>>n;
	long long arr[n];
	for(long long i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	for(long long i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            while(arr[i]>arr[i+1]){
                count++;
                arr[i+1]++;
            }
        }
	}
	cout<<count<<endl;
	return 0;
}
