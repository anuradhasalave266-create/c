//if statement
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Positive Number");
    }

    return 0;
}

//if-else statement
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}

//else-if ladder
#include <stdio.h>

int main() {
    int marks;

    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade A");
    else if (marks >= 75)
        printf("Grade B");
    else if (marks >= 50)
        printf("Grade C");
    else
        printf("Fail");

    return 0;
}

//nestef-if
#include <stdio.h>

int main() {
    int age = 20;
    int citizen = 1;

    if (age >= 18) {
        if (citizen == 1)
            printf("Eligible to Vote");
        else
            printf("Not a Citizen");
    } else {
        printf("Not Eligible");
    }

    return 0;
}


//switch statement
#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}


//for loop
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}


//while loop
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}


//do-while loop
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}


//break statement
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 6)
            break;

        printf("%d\n", i);
    }

    return 0;
}


//continue statement
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3)
            continue;

        printf("%d\n", i);
    }

    return 0;
}


//goto statement
#include <stdio.h>

int main() {
    int i = 1;

start:
    printf("%d\n", i);
    i++;

    if (i <= 5)
        goto start;

    return 0;
}