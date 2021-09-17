#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define mod 1000000007

using namespace std;


void solve(){
    long long n,m,k;
    cin>>n>>m>>k;
    
    long long arr[n], brr[m];
    
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(long long i=0;i<m;i++){
        cin>>brr[i];
    }
    
    sort(arr, arr+n);
    sort(brr, brr+m);
    
    long long i=0,j=0,count=0;
    
    while(i<n && j<m){
        if((arr[i]-k<=brr[j] && arr[i]+k>=brr[j])){
            count++;
            i++;
            j++;
        }
        else if(arr[i]<brr[j]){
            i++;

        }
        else{
            j++;
        }
    }
    
    cout<<count<<endl;
    
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
