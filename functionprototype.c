#include <stdio.h>
//what is it?
//function declaration, w/o a body, before main()
//ensures that calls to a function are made with correct arguments
void hello(char[], int); //function prototype
int main(){
    char name[] = "bro";
    int age = 21;
    hello(name, age); //correct arguments function call
    //hello(age, name); //incorrect arguments function call, would cause a compile-time error
    //hello(name); //incorrect number of arguments, would cause a compile-time error
    return 0;
}
void hello(char name[], int age){ //function definition
    printf("Hello %s, you are %d years old.\n", name, age);
}
//advantages of function prototypes:
//1. easier to navigate program with main() at the top
//2. helps with debugging
//3. commonly used in header files