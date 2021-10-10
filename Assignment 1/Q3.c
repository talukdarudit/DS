#include <stdio.h>

void convertTo2D(int arr[], int rows, int cols){
    for(int i=0; i<rows; ++i){
        for(int j=0; j<cols; ++j){
            printf("%d ", arr[i*cols+j]);
        }
        printf("\n");
    }
}

int main(){
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int arr[rows*cols];
    for(int i=0; i<rows*cols; ++i){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    convertTo2D(arr, rows, cols);
    return 0;
}
