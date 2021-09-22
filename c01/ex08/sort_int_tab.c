#include<stdio.h>
#include<stdlib.h>

void swap (int *x, int *y) {
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;
}

int partition (int array[], int left, int right) {
  int i, j, pivot;
  i = left;
  j = right + 1;
  pivot = left;

  do {
    do {
		i++;
	} while (array[i] < array[pivot]);
    do {
		j--;
	} while (array[pivot] < array[j]);
    if (i < j) { swap(&array[i], &array[j]); }
  } while (i < j);

  swap(&array[pivot], &array[j]);

  return j;
}

void quick_sort (int array[], int left, int right) {
  int pivot;

  if (left < right) {
    pivot = partition(array, left, right);
    quick_sort(array, left, pivot-1);
    quick_sort(array, pivot+1, right);
  }
}

/*int main (int argc, char *argv[]) {
  int array[argc];
  int i;

  for (i = 0; i < argc -1; i++) {array[i] = atoi(*(argv+i+1)); }

  printf("Before sort: ");
  for (i = 0; i < 10; i++) { printf("%d ", array[i]); }
  printf("\n");

  quick_sort(array, 0, argc-2);

  printf("After sort: ");
  for (i = 0; i < 10; i++) { printf("%d ", array[i]); }
  printf("\n");

  return 0;
}*/
