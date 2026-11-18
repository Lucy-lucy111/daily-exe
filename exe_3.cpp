#include<stdio.h>
void reverse(int * arr,int n){
	
		int * start = arr;
		int * end = &arr[n-1];
		while(start < end){
		
		int temp = *start;
		*start = * end;
		*end = temp;
		start ++;
		end --;
}
	
}

void print(int * arr,int n){
	for(int i=0;i<n;i++){
		
		printf("%d",arr[i]);
		
	}
}
int main(){
	int n;
	printf("please input a number:\n");
	scanf("%d",&n);
	
	int arr[100]; 
	for(int i= 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	

	 reverse(arr,n);
	 print(arr,n);
}
