// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int x,i,j;
//     int t[2002][2002];
//     cin>>x;
//     while(x--){
//         int n,k;
//         cin>>n>>k;
//         int arr[n];

//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<k+1;j++){
//                 if(i==0 || j==0){
//                     return 0;
//                 }
//             }
//         }

//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<k+1;j++){
//                 if(arr[i-1]<=j){
//                     t[i][j] = max(t[i-1][j-arr[i-1]], t[i-1][j]);
//                 }
//                 else{
//                     t[i][j] = t[i-1][j];
//                 }
//             }
//         }
//         return t[i][j];

//     }

// }


#include <bits/stdc++.h>

using namespace std;



int knapsack(int arr[], int w, int n){
        int t[2002][2002];

    for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
            }
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(arr[i-1]<=j){

                    //according to the hackerrank problem the  t[i-1][j-arr[i-1]]
                    // is changes to t[i][j-arr[i-1]]
                    t[i][j] = max(arr[i-1] + t[i][j-arr[i-1]], t[i-1][j]);
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        cout<<t[n][w]<<endl;
    return 0;
}


int main(){
    int x;
    cin>>x;
    while(x--){
        int n,w;
        cin>>n>>w;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        knapsack(arr, w, n);

    }  
}





