// #include <bits/stdc++.h>
// #include <algorithm>

// using namespace std;

// int t[2002][2002];


// int knapsack(int arr[], int w, int n){
//     if(n==0 || w==0){
//         return 0;
//     }
    
//     if(arr[n-1]<=w){
//         return max(arr[n-1] + knapsack(arr, w-arr[n-1], n-1), knapsack(arr, w, n-1));
//     }
//     else{
//         return knapsack(arr, w, n-1);
//     }
// return t[n][w];
// }


// int main(){
//     int x;
//     cin>>x;
//     while(x--){
//         int n,w;
//         cin>>n>>w;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//     knapsack(arr, w, n);
//     }
    
// return 0;
// }



