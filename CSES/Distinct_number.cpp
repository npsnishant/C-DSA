#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;


void solve(){
    long long n;
    cin>>n;
    long long arr[n];
    
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    
    std::set<int> st;
    
    for(long long i=0;i<n;i++){
        st.insert(arr[i]);
    }
    
    cout<<st.size()<<endl;
    
}

int main(){
    // long long t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
	
	return 0;
}
