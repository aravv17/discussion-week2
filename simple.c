#include<stdio.h>

int my_strlen(char str[]) {
    // Write this together
    int length = 0;

    for (int i=0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}

int main() {
    char input[256];
    char emoji[5] = "🐐";
    // take user input
    // printf("Enter a string: ");
    // WHAT GOES HERE?

    // call my_strlen and print length
    // WHAT IS MY FORMAT SPECIFIER?
    // printf("", my_strlen(input));
    printf("🐐");
}