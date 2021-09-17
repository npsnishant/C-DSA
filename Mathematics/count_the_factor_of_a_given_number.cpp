#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,count=0;
	   cin>>n;
	   
	   for(int i=1;i<=sqrt(n);i++){
	       if(n%i==0){
	           if(n/i==i){
	               count++;
	           }
	           else{
	               count = count+2;
	           }
	       }
	   }
	   
	   cout<<count<<endl;
    }
	return 0;
}
