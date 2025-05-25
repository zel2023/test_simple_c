#include <stdio.h>
#include "gcd.h"

int main() {
    int a = 48;
    int b = 18;
    int result = gcd(a, b);
    printf("GCD of %d and %d is %d\n", a, b, result);
    return 0;
}

