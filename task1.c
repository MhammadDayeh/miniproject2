#include <stdio.h>
#include <math.h>

int main() {
    float arrays_nums[10];
    float Array[10];
    
    printf("Enter 10 decimal values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &arrays_nums[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i < 2) {
            // First two elements of Array are the same as arrays_nums
            Array[i] = arrays_nums[i];
        } else {
            // Calculate square sum and take the square root
			float squareSum = arrays_nums[i-1] * arrays_nums[i-1] + arrays_nums[i-2] * arrays_nums[i-2]; 
            Array[i] = sqrt(squareSum);
        }
    }

    // Display the elements of Array
    printf("\nArray elements (square root of square sum):\n");
    for (int i = 0; i < 10; i++) {
        printf("Array[%d] = %f\n", i, Array[i]);
    }

    return 0;
}

