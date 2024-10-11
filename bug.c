/* Discussion 2 Demo - Memory Errors */

#include <stdio.h>

#define LEN 4 

/**
 * Increment all the numbers in an array by 1.
 */
void increment(int arr[], int length)
{
    for (int i = 0; i <= length; i++) {
        arr[i]++;
    }
}

int main()
{
    int arr1[LEN] = {1, 2, 3, 4};
    int arr2[LEN] = {10, 20, 30, 40};

    increment(arr1, LEN);
    increment(arr2, LEN);

    // PRINTING ARR1
    printf("arr1 = ");
    for (int i = 0; i < LEN; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // PRINTING ARR2
    printf("arr2 = ");
    for (int i = 0; i < LEN; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
