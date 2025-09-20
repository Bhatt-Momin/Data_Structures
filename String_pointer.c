#include <stdio.h>
#include <string.h>

// Function
void String_Length(char a[]);
void Rev_String(char b[]);
void is_palindrome(char c[]);

int main() {
    char str[100];
    char *p;

    printf("Enter a string: ");
    scanf("%s", str);  // can't use &str with %s

    p = str;  // str is already a pointer to the first element

    printf("\nCharacters in the string using pointer traversal:\n");
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }

    printf("\n\n");

    String_Length(str);
    printf("\nReversed String: ");
    Rev_String(str);
    printf("\n");
    is_palindrome(str);

    return 0;
}

void String_Length(char a[]) {
    char *p;
    int count = 0;

    for (p = a; *p != '\0'; p++) {
        count++;
    }

    printf("Length of string: %d\n", count);
}

void Rev_String(char b[]) {
    char *start = b;
    char *end = b;

    while (*end != '\0') {
        end++;
    }
    end--; // move to last character

    while (end >= start) {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

void is_palindrome(char c[]) {
    char *left = c;
    char *right = c;

    while (*right != '\0') {
        right++;
    }
    right--; // move to last character

    int flag = 1;

    while (left < right) {
        if (*left != *right) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if (flag) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}
