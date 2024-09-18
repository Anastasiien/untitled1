#include <stdio.h>
int main() {
    int a = 0;
    scanf ("%d", &a);
    int a1 = a%10;
    a = a/10;
    a1 = a1*10 + a%10;
    a = a/10;
    a1 = a1*10 + a%10;
    a = a/10;
    a1 = a1*10 + a%10;
    a = a/10;
    a1 = a1*10 + a%10;
    a = a/10;
    printf("%d\n", a1);
}




