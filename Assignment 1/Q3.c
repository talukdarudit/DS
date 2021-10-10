#include <stdio.h>

void convertTo2D(int *arr,int **res, int rows, int columns){
    int k=0;
    for(int i=0; i<rows; ++i){
        for(int j=0; j<columns; ++j){
            res[i][j]=arr[k];
            k++;
        }
    }
}

void print2DArray(int **res, int rows, int columns){
    for(int i=0; i<rows; ++i){
         for(int j=0; j<columns; ++j){
            printf("%d\t", &res[i][j]);
         }
         printf("\n");
    }

int main(){
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int arr[rows*columns];
    int res[rows][columns];
    for(int i=0; i<rows*columns; ++i){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    convertTo2D(arr, rows, columns);
    print2DArray(res, rows, columns);
    return 0;
}
