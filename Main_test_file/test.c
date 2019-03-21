#include <stdio.h>

int main(void)
{
	int age = 41, old;
	int weight;
	
	weight = 180;
	old = 2*age;
	
	printf("Your weight %d pounds. \n", weight);
	printf("You are %d years old.\n", age);
	printf("People twice your age are %d years old.\n", old);
}
