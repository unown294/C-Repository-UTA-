#include <stdio.h>

#define FACTOR 5
int multiplier(int i);
int multiplier2(int i);
void another_print(int number1, int number2);

void another_print(int number1, int number2)
{
	printf("%d is number 1, and %d is number 2\n", number1, number2);
}

int main(void)
{
	int number1 = 2;
	int number2 = 4;
	int fnumber1;
	int fnumber2;
	
	another_print(number1,number2);
	fnumber1 = multiplier(number1);
	fnumber2 = multiplier2(number2);
	
	
	printf("The sum of the numbers %d & %d\n", number1, number2);
	printf("The multiplied versions of each number are: Number1 = %d & Number2 = %d\n", fnumber1, fnumber2);
}

int multiplier(int i)
{
	i = i * FACTOR;
	return i;
}

int multiplier2(int i)
{
	i = i * FACTOR;
	return i;
}

