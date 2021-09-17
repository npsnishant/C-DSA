#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

// #define long long ll;
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin>>n;
	long long  arr[n];
	
	for(long long i=0;i<n-1;i++){
	    cin>>arr[i];
	}
	sort(arr, arr+n-1);
	
	for(long long i=0;i<n;i++){
	    if(arr[i]==i+1){
	        continue;
	    }
	    else{
	        cout<<i+1<<endl;
	        break;
	    }
	}
	
	return 0;
}
