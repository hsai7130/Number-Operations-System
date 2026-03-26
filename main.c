#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even or odd
    if(num % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    // Check positive or negative
    if(num > 0) {
        printf("Positive number\n");
    } else if(num < 0) {
        printf("Negative number\n");
    } else {
        printf("Zero\n");
    }

    // Simple loop
    printf("Numbers from 1 to %d:\n", num);
    for(int i = 1; i <= num; i++) {
        printf("%d ", i);
    }

    return 0;
}
