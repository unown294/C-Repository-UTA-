#include <stdio.h>
#include <stdlib.h>
#include "StudentConstant.h"
//#include "Sort.h"
//#include "PrintTable.h"

int main(void)
{
	int NUM_ATTRIBUTES, NUM_STUDENTS,i,j,k,m,n;
	
	NUM_ATTRIBUTES 	= constant2(0);
	NUM_STUDENTS 	= constant1(0);
	int array[NUM_STUDENTS][NUM_ATTRIBUTES];
	int min = 18;
	int max = 30;
	
	for (i = 0; i < NUM_STUDENTS; i++){
      for(j = 0; j < NUM_ATTRIBUTES; j++){
		array[i][0] = rand() % 100000;
		array[i][1] = rand() % (max + 1 - min)) + min;
	  }
	}
  
    //Sort(array[][],NUM_ATTRIBUTES,NUM_STUDENTS);
	//print_function(&array, NUM_STUDENTS);
	for (i = 0; i < NUM_STUDENTS; i++){
		printf("\n %5d , %5d",array[i][0],array[i][1]);
	}
	return 0;
}

