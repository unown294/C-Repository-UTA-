#ifndef SORT_H_
#define SORT_H_

int Sort(int array[][],int m, int n)
{
  int k,j,i;
	
  for(k = 0; k < m; k++) {
   for (i = 0; i < n; i++) {
     for (j = i + 1; j < n; ++j) {
       if (array[k][i] > array[k][j])  {
           int swap = array[k][i];
           array[k][i] = array[k][j];
           array[k][j] = swap;
       }
     }
   } 

 }
 return array[][];
}

#endif /* FOO_H_ */