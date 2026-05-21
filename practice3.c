//reverse an array
#include<stdio.h>
int main(){
    int n;
    int k=0;
    int temp;
    
    printf("how many numbers do you want to reverse:\n");
    scanf("%d", &n);
    printf("enter %d numbers\n", n);
    int arr[n];
    int end=n-1;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    while(k<end){
        
        temp=arr[k];
        arr[k]=arr[end];
        arr[end]=temp;
        end--;
        k++;
    }
    printf("reversed array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}
