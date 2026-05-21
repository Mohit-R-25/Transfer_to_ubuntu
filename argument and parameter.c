#include<stdio.h>
void birthday(char x[], int y){
    printf("happy birthday dear brother %s, you are %d years old now\n", x, y); //parameters: are what a fucntion expects when its invoked

}


int main(){
    char x[] = "mohit";
    int y = 19;
    birthday(x, y);  //arguments: are what you are sending a function
    return 0;
    
}
//these functions can talk to each other and cannot see inside each other
