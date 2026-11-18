#include<stdio.h>
//建立函数是因为不可能知道输入的数字是几，从而无法确定循环的次数，所以要建立两个函数，swap和ascending来实现。 
void swap(int * a,int * b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int * arr,int n,int ascending){
	for(int i = 0;i<n-1;i++){
		for(int j = 0; j<n-1-i;j++){
			if(ascending == 0){
				if(arr[j]>arr[j+1]){
					swap(&arr[j],&arr[j+1]);
				}
			} 
			else if(ascending==0){
				if(arr[j]>arr[j+1]){
					swap(&arr[j],&arr[j+1]);
				}
			}
			
		}
	}
	
}
int main(){
	int n;
	int arr[1000];
	int ascending;
	printf("please input a number:\n");
	scanf("%d",&n);
	printf("please input %d numbers:\n",n);
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("please choose 1 or 0\n");
	scanf("%d",&ascending);
	sort(arr,n,ascending);
	for(int i =0;i<n;i++){
		printf("%d ",arr[i]);
	} 
	return 0;
}
