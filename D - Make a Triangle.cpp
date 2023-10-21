#include <stdio.h>

int result(long long int arr[]){
	for(int i=0; i<arr[i]; i++){
		if(arr[i]+arr[i+1] > arr[i+2]){
			if(arr[i]+arr[i+2] > arr[i+1]){
				if(arr[i+1]+arr[i+2] > arr[i]){
					return 1;
				}
			}
		}
	}
	return 0;
}
	

int main(){
	long long int n = 0;
	scanf("%lld", &n); getchar();
	
	long long int num[n+5] = {};
	for(int i=0; i<n; i++){
		scanf("%lld", &num[i]); getchar();
	}
	if(result(num)==1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}
