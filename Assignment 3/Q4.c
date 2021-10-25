#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InsertItemAtLast(int* A, int n, int key){
    // Inserts the key value at the end of the array
    // Args:
    //     array
    //     size
    //     key
    if(n==0){
        printf("Underflow!\n");
    }
    else if(A[n-1]==-1){
        A[n-1]=key;
    }
    else{
        printf("Overflow!\n");
    }
}
void InsertItemAtFirst(int* A, int n, int key){
    // Inserts the key value at the start of the array
    // Args:
    //     array
    //     size
    //     key
    if(n==0){
        printf("Underflow!\n");
    }
    else if(A[n-1]!=-1){
        printf("Overflow!\n");
    }
    else{
        for(int i=n-1; i>0; i--){
            A[i]=A[i-1];
        }
        A[0]=key;
    }
}
void InsertItemAtIndex(int* A, int n, int ind, int key){
    // Inserts the key value at the specified index of the array
    // Args:
    //     array
    //     size
    //     index
    //     key
    if(ind<0){
        printf("Underflow!\n");
    }
    else if(ind>=n){
        printf("Overflow!\n");
    }
    else if(A[n-1]!=-1){
        printf("Overflow!\n");
    }
    else{
        for (int i = n-1; i > ind; i--)
        {
            A[i]=A[i-1];
        }        
        A[ind]=key;
    }
}
void DeleteItemFromLast(int* A, int n){
    // Deletes the value at the end of the array
    // Args:
    //     array
    //     size
    if(n==0){
        printf("Underflow!\n");
    }
    else{
        A[n-1]=-1;
    }
}
void DeleteItemFromLFirst(int* A, int n){
    // Deletes the value at the start of the array
    // Args:
    //     array
    //     size
    if(n==0){
        printf("Underflow!\n");
    }
    else{
        for(int i=0; i<n-1; ++i){
            A[i]=A[i+1];
        }
        A[n-1]=-1;
    }
}
void DeleteItemAtIndex(int* A, int n, int ind){
    // Deletes the value at specified index of the array
    // Args:
    //     array
    //     size
    //     index
    if(ind<0){
        printf("Underflow!\n");
    }
    else if(ind>=n){
        printf("Overflow!\n");
    }
    else{
        for (int i = ind; i < n-1; i++)
        {
            A[i]=A[i+1];
        }
        A[n-1]=-1;
    }        
}
int FindItemUnsorted(int A[], int n, int key){
    // finds the key value in unsorted array through linear search
    // args:
    //     array
    //     size
    //     key
    for(int i=0; i<n; ++i){
        if(A[i]==key)
            return i;
    }
    return -1;
}
int FindItemSorted(int A[], int n, int key){
    // finds the key value in sorted array through binary search
    // args:
    //     array
    //     size
    //     key
    int low, high, mid;
    low=0;high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key){
            return mid;
        }
        else if(A[mid]<key){
            low=mid;
        }
        else if(A[mid]>key){
            high=mid;
        }
    }
    return -1;
}
void sortArray(int A[], int n){
    //Sorting with selection sort algorithm
    // args:
    //     array
    //     size
    int minIndex, temp;
    for(int i=0; i<n-1; ++i){
        minIndex=i;
        for(int j=i+1; j<n; ++j){
            if(A[j]<A[minIndex]){
                minIndex=j;
            }    
        }
        temp=A[minIndex];
        A[minIndex]=A[i];
        A[i]=temp;
    }
}
int* extractSubSet(int A[], int n, int i, int j){
    int *subArr;
    int k=0;
    for(int t=i; t<j; ++t){
        if(t<n && t<n){
            subArr[k++]=A[t];
        }
        else{
            subArr=NULL;
        }
    }
    return subArr;
}
void deleteSubSet(int A[], int *n, int i, int j){
    int k=1;
    for(int t=i; t<=j; ++t){
        if(j+k<*n)
            A[t]=A[j+k++];
    }
    *n-=(j-i+1);
}
int* splitIntoTwoArray(int A[], int* n){
    int size=(*n)/2;
    *n=size;
    return &A[size];
}


void cloneArray(int A[], int n, int B[]){
    for(int i=0; i<n; ++i){
        B[i]=A[i];
    }
}
void shiftLeftArray(int A[], int n){
    int temp=A[0];
    for(int i=1; i<n; ++i){
        A[i-1]=A[i];
    }
    A[n-1]=temp;
}
void shiftRightArray(int A[], int n){
    int temp=A[n-1];
    for(int i=n-2; i>=0; --i){
        A[i+1]= A[i];
    }
    A[0]=temp;
}
void rotateArrayClockwise(int A[], int n, int r){
    int rotations=r;
    while(rotations){
        shiftLeftArray(A, n);
        rotations--;
    }
}
void rotateArrayAntiClockwise(int A[], int n, int r){
    int rotations=r;
    while(rotations){
        shiftRightArray(A, n);
        rotations--;
    }
}
int findMin(int A[], int n){
    int min=0;
    for(int i=1; i<n; ++i){
        if(A[i]<A[min])
            min=i;
    }
    return min;
}
int findMax(int A[], int n){
    int max=0;
    for(int i=1; i<n; ++i){
        if(A[i]>A[max])
            max=i;
    }
    return max;
}
void fillArrayPseudoRandom(int A[], int n){
    for(int i=0; i<n; ++i){
        int r = rand()%10000;
        A[i]=r; 
    }
}
void fillArrayTrueRandom(int A[], int n){
    for(int i=0; i<n; ++i){
        int r = rand();
        A[i]=r; 
    }
}
void increaseArraySize(int A[], int *n, int m){
    *n+=m;
}
void setArrayToZero(int A[], int n){
    for(int i=0; i<n; ++i){
        A[i]=0;
    }
}
void deleteAllItemOfArray(int A[], int n){
    A=NULL;
}
void deleteArray(int A[], int n){
    A=NULL;
}
int* allocateArray(int* A, int n){
    A = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; ++i){
        A[i]=-1;
    }
    return A;
}
int main(){
    
    return 0;
}
