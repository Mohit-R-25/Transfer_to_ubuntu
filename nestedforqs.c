#include<stdio.h>
int main(){
    
    int n;
    printf("enter binary number\n");
    scanf("%d", &n);
    int dec=0;
    int base=1; //2^0

        while(n){
        int lastdigit=n%10;
        n=n/10;
        dec+=lastdigit*base;
        dec=dec*2;
        }
    
    printf("%d", dec);
    
    return 0;
}