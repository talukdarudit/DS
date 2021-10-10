#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int *arr, int n)
{
    int minIndex, temp;
    for (int i = 0; i < n - 1; ++i)
    {
        minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void bubbleSort(int *arr, int n)
{
    int temp, isSorted = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        isSorted = 1;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
    }
}

int main()
{
    int sz;
    char sortedArray;
    printf("Enter the size of array: ");
    scanf("%d", &sz);
    int randArray[sz], i;
    for (i = 0; i < sz; i++)
    {
        randArray[i] = rand() % 100;
    }

    printf("Should array be already sorted?(y/n) \n");
    scanf(" %c", &sortedArray);
    
    if(sortedArray=='y'){
        selectionSort(randArray, sz);
    }


    clock_t start, end;
    int t;
    start = clock();
    bubbleSort(randArray, sz);
    end = clock();
    t = end - start;
    printf("Total elapsed time for bubble sort algorithm: %f sec\n", (double)t / (double)CLOCKS_PER_SEC);


    for (i = 0; i < sz; i++)
    {
        randArray[i] = rand() % 100;
    }
    
    if(sortedArray=='y'){
        selectionSort(randArray, sz);
    }

    start = clock();
    selectionSort(randArray, sz);
    end = clock();
    t = end - start;
    printf("Total elapsed time for selection sort algorithm: %f sec\n", (double)t / (double)CLOCKS_PER_SEC);

    return 0;
}
