#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

// #define long long ll;
using namespace std;

int main() {
	// your code goes here
	long long count=0;
	long long ans=-100;
	string str;
	cin>>str;
	

	for(long long i=0;i<str.length();i++){
	    if(str[i]==str[i+1]){
	        count++;
	    }
	    else{
	        if(ans<count){
	            ans = count;
	        }
	        count=0;
	    }
	}
	if((count+1)==str.length()){
	    cout<<count+1<<endl;
	}
	else{
    	ans = ans+1;
    	cout<<ans<<endl;
	}
	return 0;
}
