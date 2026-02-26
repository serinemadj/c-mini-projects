#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int min, max;
    long long mul_positive = 1;
    int neg_sum = 0, neg_counter = 0;

    printf("This program determine the max, min, product of positive values and average of negative values in an array");
    printf("How many elements (<=100): \n");
    scanf("%d", &n);

    
    printf("Insert %d numbers:\n", n);

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max  = arr[0];

    

    for(i = 0; i < n; i++) {

        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
           max = arr[i];

        if(arr[i] > 0)
            mul_positive *= arr[i];

        if(arr[i] < 0) {
            neg_sum += arr[i];
            neg_counter++;
        }
    }

    printf("minimum value: %d\n", min);
    printf("maximum value: %d\n", max);
    printf("Product of all positives: %lld\n", mul_positive);

    if(neg_counter > 0) {

        float avg = (float)neg_sum / neg_counter;

        printf("Average of negative numbers: %.2f\n", avg);
    } else {
        printf("No negative numbers found.\n");
    }

    return 0;
}
