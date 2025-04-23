#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};              // sample array
    int n = sizeof(arr) / sizeof(arr[0]);     // element count
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];                        // add each element
    }

    printf("Sum: %d\n", sum);                 // print result
    return 0;
}
