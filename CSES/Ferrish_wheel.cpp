#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;


void solve(){
    long long n,x,sum =0;
    cin>>n>>x;
    
    long long arr[n];
    
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    
    long long ans = sum/x;
    
    if(ans<ans*x){
        ans++;
    }
    
    cout<<ans<<endl;
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
