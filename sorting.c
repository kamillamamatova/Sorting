// Bubble Sorting

#include <stdio.h>

void sort(int array[], int size){
    // Nested loop
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            // Compare current number in the array with the next letter in the array
            if(array[j] > array[j + 1]){
                // If the current number is larger than the next, swap
                // So that the smaller number is ahead in the array
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(){
    int array[] = {9, 4, 5, 2, 6, 3, 6, 7, 9};
    int size = sizeof(array)/sizeof(array[0]);  

    sort(array, size);

    for(int i = 0; i < size; i++){
        printf("%d " array[i]);
    }

    // Exit program
    return 0;
}
