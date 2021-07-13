#include <stdio.h>
void reverse() {
    int n, rev = 0, remainder;
    printf("Enter an integer to be reversed: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
   // return 0;
}
