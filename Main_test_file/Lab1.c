#include<stdio.h>
 
void bubble_sort(int[], int);
 
int main() {
	int arr[10000], num, i;
	num = 10000;
   
   for (i = 0; i < num; i++)
      arr[i]=rand();
 
   bubble_sort(arr, num);
   
   
}
 
void bubble_sort(int iarr[], int num) {
   int i, j, k, temp,l,u;
 
/*
   printf("\n");
	for (k = 0; k < num; k++) {
		printf("%15d", iarr[k]);
	} */
 
/* Bubble Sorting function */
   for (i = 1; i < num; i++) {
      for (j = 0; j < num - 1; j++) {
         if (iarr[j] > iarr[j + 1]) {
            temp = iarr[j];
            iarr[j] = iarr[j + 1];
            iarr[j + 1] = temp;
         }
      }
 
    }
	
/* Printing of the array */
		l = 1;
   		printf("\n");
		for(u = 0; u < num; u++){
			printf("  %12d",iarr[u]);
			if (l == 10){
				printf("\n");
				l = 0;
			}
			l++;
		}
	printf("\n");
}

