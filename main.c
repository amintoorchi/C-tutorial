#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer:\n");
    scanf("%d", &num);

    if(num % 2 == 0) 
        printf("%d is EVEN\n", num);
    else
        printf("%d is ODD\n", num);

    if(num > 0)
        printf("%d is Positive\n", num);
    else if(num < 0)
        printf("%d is Negative\n", num);
    else
        printf("%d is ZERO\n", num);

    return 0;
}