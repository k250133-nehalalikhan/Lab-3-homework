#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter integer a:\n");
    scanf("%d", &a);
    printf("Enter integer b:\n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

