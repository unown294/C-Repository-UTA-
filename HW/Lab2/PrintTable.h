#ifndef PRINTTABLE_H_
#define PRINTTABLE_H_

void print_fucntion(int array[int x][int y], int NUM_STUDENTS)
{
	int i;
	for (i = 0; i < NUM_STUDENTS; i++){
		printf("\n %5d , %5d",array[i][0],array[i][1]);
	}
}

#endif

