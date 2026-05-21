//cs25b1022, mohit raghavendra
//to convert vowels to 0 and consonants to 1
#include<stdio.h>
int main(){
    int n;
    int i;
    int j;
    printf("how many letters does your name have:");
    scanf("%d", &n);
    char name[n];
    printf("enter you name:");
    scanf("%s", name);
    for(int i=0;i<n;i++){
        if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
            name[i]=0;
        }
        else{
            name[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d", name[i]);
    }
    printf("\n%d\n", name[3]);
return 0;
}
