#include <stdio.h>
#include <stdbool.h>
int main()
{
      char name[] = "bro";
	int x = 4;

	char grade = 'C';  //single character

double y = 3.141592653589793;    //long floAT

bool e = true;

	printf("%s\n", name);      //string
	
	printf("%d\n", x);        //integer

	printf("%c\n", grade);        //character

	printf("%0.15lf\n", y);      //the .15 represents the number of digits after decimal point


	printf("%d\n", e);           //boolean


int a = 5;

	a++;            //incrementing a number
	
	printf("%d\n", a);

//OR:
	int g = 10;
	
	g+=2;     //org=g+2, these are called augmented assignment operators
	
	printf("%d\n", g);

return 0;
}
