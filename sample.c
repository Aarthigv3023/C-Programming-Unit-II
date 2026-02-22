#include <stdio.h>

int main() {
    int num, square;

    // User input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Square calculation
    square = num * num;

    // Output
    printf("Square of %d is %d\n", num, square);

    return 0;
}
