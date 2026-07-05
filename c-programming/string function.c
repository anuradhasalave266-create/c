#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copy[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // strlen()
    printf("\nLength of first string = %lu", strlen(str1));
    printf("\nLength of second string = %lu", strlen(str2));

    // strcpy()
    strcpy(copy, str1);
    printf("\nCopied string = %s", copy);

    // strcat()
    strcat(str1, str2);
    printf("\nConcatenated string = %s", str1);

    // strcmp()
    if (strcmp(copy, str2) == 0)
        printf("\nBoth strings are equal.");
    else
        printf("\nBoth strings are different.");

    return 0;
}