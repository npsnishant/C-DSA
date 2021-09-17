#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<string> split_string(string);

// Complete the longestCommonSubsequence function below.
vector<int> longestCommonSubsequence(vector<int> arr, vector<int> brr) {
    
    int m = arr.size();
    int n = brr.size();
    
    int t[m+1][n+1];

    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }

    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(arr[i-1] == brr[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
    }


    int i=m, j=n;
    vector<int>v;

    while(i>0 && j>0){
        if(arr[i-1] == brr[j-1]){
            v.push_back(arr[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j]){
                j--;
            }
            else{
                i--;
            }
        }
    }

    reverse(v.begin(), v.end());

    return v;

}
}    