/*This cide is generate all possible combinations of 1,2 and 3*/
#include <stdio.h>

int main() {
    int i, j, k;
    int num_elements;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);

    // Check if the number of elements is valid
    if (num_elements <= 0) {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    // Array to store the input elements
    int arr[num_elements];

    // Ask user to input the elements
    printf("Enter %d elements: ", num_elements);
    for (i = 0; i < num_elements; i++) {
        scanf("%d", &arr[i]);
    }

    // Print combinations of three elements
    printf("The combinations are:\n");
    for (i = 0; i < num_elements; i++) {
        for (j = 0; j < num_elements; j++) {
            for (k = 0; k < num_elements; k++) {
                printf("%d %d %d\n", arr[i], arr[j], arr[k]);
            }
        }
    }

    return 0;
}
