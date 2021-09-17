#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

// #define long long ll;
using namespace std;

int main() {
	// your code goes here
	long long count=0,n;
	cin>>n;
	if(n==1){
	    cout<<"1"<<endl;
	    return 0;
	}
	if(n==2 || n==3){
	    cout<<"NO SOLUTION"<<endl;
	    return 0;
	}
	if(n==4){
		cout<<"2 4 1 3"<<endl;
		return 0;
	}
	else{
	    if(n%2==0){
	       for(long long i=1;i<n;i=i+2){
	                cout<<i<<" ";
	       }
	       for(long long i=2;i<=n;i=i+2){
	                cout<<i<<" ";
	       }
	   }
	   else{
	       for(long long i=1;i<=n;i=i+2){
	                cout<<i<<" ";
	       }
	       for(long long i=2;i<n;i=i+2){
	                cout<<i<<" ";
	       }
	   }

	    
	}
	return 0;
}
