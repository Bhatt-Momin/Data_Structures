#include <stdio.h>
#include <string.h>

// Functions
void traverse_string(char d[]);
void length_string(char c[]);
void reverse_string(char a[]);
void string_library(char b[], char e[]);

int main() {
    char str[100];
    char str2[] = "Momin";

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nYou entered: %s\n", str);

    printf("\nTraversing string: ");
    traverse_string(str);

    printf("\n");
    length_string(str);

    printf("\nReversed string: ");
    reverse_string(str);

    printf("\n\nUsing string library functions:\n");
    string_library(str, str2);

    return 0;
}

void traverse_string(char d[]) {
    for (int i = 0; d[i] != '\0'; i++) {
        printf("%c", d[i]);
    }
}

void length_string(char c[]) {
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++) {
        count++;
    }
    printf("Length of string is %d", count);
}

void reverse_string(char a[]) {
    int length = strlen(a);
    for (int j = length - 1; j >= 0; j--) {
        printf("%c", a[j]);
    }
}

void string_library(char b[], char e[]) {
    char temp1[100], temp2[100]; // To avoid modifying original strings
    strcpy(temp1, b);
    strcpy(temp2, e);

    printf("Concatenation: %s\n", strcat(temp1, temp2));

    strcpy(temp1, b); // Reset
    printf("Copy of second string to first: %s\n", strcpy(temp1, e));

    if (strcmp(b, e) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
}
