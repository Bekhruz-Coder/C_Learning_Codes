#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define RMAX 32768

int main(void){
    
    int arr[SIZE];
    
    srand(time(NULL));
    
    for(int i = 0; i < SIZE; i++){
        arr[i] = rand() % RMAX - 1;
    }
    
    int max = arr[0];
    int min = arr[0];
    
    for(int i = 1; i < SIZE; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    
    for(int i = 0; i < SIZE; i++){
        printf("%d  ", arr[i]);
    }
    printf("\n");
    
    printf("최대값은 %d\n", max);
    printf("최소값은  %d\n", min);
    
    return 0;
}