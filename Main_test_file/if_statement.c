#include <stdio.h>

int main()
{
	int age;     					/* needs a variable */
	
	printf("\nPlease Enter your age:");     	/* Asks for age */
	scanf("%d", &age);				/* scans for an age */
	if(age < 100) {
		printf("You are pretty young!\n" );
	}
	else if(age == 100){
		printf("You are old\n");
	}
	else {
		printf("You are really old\n");
	}
   return 0;
}
