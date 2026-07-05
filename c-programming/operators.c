
//Arithmetic operation
#include <stdio.h>

int main() {
    int a = 20, b = 10;

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    return 0;
}

//Relational operators
#include <stdio.h>

int main() {
    int a = 15, b = 10;

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    return 0;
}

//Logical operators
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("a < b && b > 15 = %d\n", (a < b && b > 15));
    printf("a > b || b > 15 = %d\n", (a > b || b > 15));
    printf("!(a < b) = %d\n", !(a < b));

    return 0;
}

//Assignment operators
#include <stdio.h>

int main() {
    int a = 10;

    a += 5;
    printf("a += 5 : %d\n", a);

    a -= 3;
    printf("a -= 3 : %d\n", a);

    a *= 2;
    printf("a *= 2 : %d\n", a);

    a /= 4;
    printf("a /= 4 : %d\n", a);

    return 0;
}

//increment and decrement operators
#include <stdio.h>

int main() {
    int a = 5;

    printf("Initial value = %d\n", a);
    printf("Pre-increment = %d\n", ++a);
    printf("Post-increment = %d\n", a++);
    printf("Value after post-increment = %d\n", a);

    printf("Pre-decrement = %d\n", --a);
    printf("Post-decrement = %d\n", a--);
    printf("Value after post-decrement = %d\n", a);

    return 0;
}


//Bitwise operators
#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}