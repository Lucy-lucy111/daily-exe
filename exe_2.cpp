#include<stdio.h>
void stat(int * arr,int n,int * max,int * min,double * ave){
	int sum = 0;
    *max = arr[0];
	*min = arr[0];
	for(int i = 0;i<n;i++){
		if(arr[i] > *max){
			*max = arr[i];
		
		}
		if(arr[i] < *min){
			*min = arr[i];
		
		}
		sum  += arr[i];
	}
	*ave = sum / n;
}
int main(){
	int n;
	int arr[100];
	int min;
	int max;
	double ave;
	
	
	printf("please input a number:\n");
	scanf("%d",&n);
	
	if(n<0){
		printf("the array is empty\n");
		return 0;}
		printf("please input %d numbers:\n", n);
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	stat(arr,n,&max,&min,&ave);
	printf("max is :%d\n",max);
	printf("min is :%d\n",min);
	printf("average is £»%lf",ave);
	
       
	

}
