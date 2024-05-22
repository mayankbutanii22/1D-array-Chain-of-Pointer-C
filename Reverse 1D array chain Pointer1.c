#include<stdio.h>
	void reverse(int a[]){
	int x=0,size;
	int *ptr=&a;
	
	for(x=0; x<size; x++){
		  printf("%d ",a[x]);
	}
	printf("\nReversed array elements: ");   
	for(x=4; x>=0; x--){
	printf("%d ",a[x]);
	}
	
}
int main(){
	int x;
	int **ptr= &ptr;
	int a[5]={1,2,3,4,5};
	printf("Enter the array's size: ");
	scanf("%d",&x);
		
	a[0] = 5;
    a[1] = 9;
    a[2] = 4;
    a[3] = 7;
    a[4] = 3;

	for(x=0; x<5; x++){
	printf("%d ",a[x]);
	}
	printf("\nReversed array elements: ");   
	for(x=4; x>=0; x--){
	 printf("%d ",a[x]);
	}
}
	
