#include <stdio.h>
//first we declare the function1234

int findmax(int a, int b){  //parameters
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int maximumfunc = findmax(3,4);
    printf("the maximum value is %d", maximumfunc);
return 0;

}