#include <stdio.h>
int maxSubArray(int arr[], int size);
int main() {
    int arr[] = {-4, 2, -5, 4, -3, 2, 1, -1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = maxSubArray(arr, size);
    printf("%d\n", result);
    return 0;
}
int maxSubArray(int arr[], int size){
	int global_max = arr[0];
    int current_max = arr[0];
    for (int i = 1; i < size; i++) {
        if (current_max + arr[i] < arr[i]) current_max = arr[i];
	    else current_max += arr[i];
        if (current_max > global_max) {
            global_max = current_max;
        }
        printf("%d\n", i, global_max);
    }
    printf("\n");
    return global_max;
}
