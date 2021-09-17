#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int start = 0;
	int end = n-1;

	while(start<=end){
		int mid = start + (end-start)/2;

		if(mid>0 && mid<n-1){
			if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
				return mid;
			}

			if(arr[mid]<arr[mid-1]){
				end = mid-1;
			}
			else{
				start = mid+1;
			}
		}
		else if(mid==0){
			if(arr[0]>arr[1]){
				return 0;
			}
			else{
				return 1;
			}
		}
		else if(mid == n-1){
			if(arr[mid-1]<arr[mid]){
				return mid;
			}
			else{
				return mid-1;
			}
		}
		
	}

	return 0;