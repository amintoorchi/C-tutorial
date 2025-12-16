#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer:\n");
    scanf("%d", &num);

    if(num % 2 == 0) 
        printf("%d is Zog\n", num);
    else
        printf("%d is Fard\n", num);


    if(num > 0)
        printf("%d is positive\n", num);
    else if(num < 0)
        printf("%d is negative\n", num);
    else
        printf("%d is ZERO\n", num);

    return 0;
}