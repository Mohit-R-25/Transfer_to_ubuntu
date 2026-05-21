#include <stdio.h>
void main(){
	
	int n;
	//sum of n numbers
	printf("number of natural numbers you want to add up\n");
	scanf("%d", &n);
	int sum=0;
	for(int i=1;i<=n;i=i+1){
	 	sum=sum+i;
	 	
	 }
	 printf("sum of numbers is: %d\n", sum);
}
