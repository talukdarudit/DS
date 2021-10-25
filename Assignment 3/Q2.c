#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void AverageCaseInput(int n, int input[]) {
    srand(time(NULL));
    for(int i = 0; i<n; i++)
    input[i] = rand()%10000;
}

void BestCaseInput(int n, int input[]) {
  for(int i = 0; i<n; i++)
    input[i] = i;
}

void WorstCaseInput(int n, int input[]) {
  for(int i = 0; i<n; i++)
    input[i] = n-i-1;
}

void insertionSort(int n, int input[]) {
  int key, j;
  for (int i = 1; i < n; i++)
  {
    key = input[i];
    j = i - 1;
    while (j >= 0 && input[j] > key)
    {
        input[j + 1] = input[j];
        j = j - 1;
    }
    input[j + 1] = key;
  }
}

int main() {

  int n;
  scanf("%d", &n);

  int input[n];

  printf("For Best Case Input: ");
  clock_t start1 = clock();
  BestCaseInput(n, input);
  insertionSort(n, input);
  clock_t end1 = clock();
  printf("Total elapsed time : %f\n", (double)(end1 - start1)/(double)CLOCKS_PER_SEC);

  printf("For Average Case Input: ");
  clock_t start2 = clock();
  AverageCaseInput(n, input);
  insertionSort(n, input);
  clock_t end2 = clock();
  printf("Total elapsed time : %f\n", (double)(end2 - start2)/(double)CLOCKS_PER_SEC);

  printf("For Worst Case Input: ");
  clock_t start3 = clock();
  WorstCaseInput(n, input);
  insertionSort(n, input);
  clock_t end3 = clock();
  printf("Total elapsed time : %f\n", (double)(end3 - start3)/(double)CLOCKS_PER_SEC);

  return 0;
}
