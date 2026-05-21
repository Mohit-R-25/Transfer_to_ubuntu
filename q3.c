#include<stdio.h>
int main(){
    int Limits[3];
    printf("Limits:\n");
    for(int i=0;i<3;i++){
        scanf("%d", &Limits[i]);
    }
    int Wear_factors[3];
    printf("Wear factors");
    for(int i=0;i<3;i++){
        scanf("%d", &Wear_factors[i]);
    }
    w1=Wear_factors[0];
    w2=Wear_factors[1];
    w3=Wear_factors[2];
    printf("How many targets?\n");
    int n;
    int targets[n];
    printf("Enter targets:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &targets[i]);
    }
    int D;
    printf("Enter max difference between inner and outer(D):\n");
    scanf("%d", &D);
    int minfound = 0;
    while(minfound!=1){
        for(int i=0;i<Limits[0];i++){
            for(int j=0;j<Limits[0];j++){
                for(int k=0;k<Limits[0];k++){
                    for(int t=0;t<n;t++){
                        for(int tries=0;tries<(Limts[0]*Limts[0]*Limts[0]);tries++){
                            
                        }
                    }
                }
            }
        }

    }
}