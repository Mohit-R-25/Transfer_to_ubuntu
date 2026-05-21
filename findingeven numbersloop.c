#include <stdio.h>
void main(){

	int array[10];
	printf("enter 10 numbers");
	
	for(int i=0;i<=9;i++){
		scanf("%d", &array[i]);

	}
	printf("\n");
	for(int i=0;i<=9;i++){
		//printf("%d", array[i]);
		if(array[i]%2==0){
			printf("%d,",array[i]);
		
		}

	}
	
	printf("\n");
	
	
	
	
}
