//Linear Search

#include<stdio.h>

int main(){
	int arr[100];			// declaring array 
	int i,n,element;		// declaring variables
	
	
	printf("eneter the sizeof the array:");
	scanf("%d",&n);
	printf("\n Enter the elements:\n");
			
			// for loop to scan elements
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("enter the element to be searched :");
	scanf("%d",&element);
			// loop to search for the given element and to exit from loop
	for(i=0;i<n;i++){
		if(arr[i]==element){
			printf("Element is found and its position is %d", i+1);
			break;
		}
	}
			// condition checking for full traverse of tthe array
	if(i==n)
		printf("The elements is not found \n");
	
}