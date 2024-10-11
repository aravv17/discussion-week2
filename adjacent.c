#include <stdio.h>
#include <string.h>

int my_strlen(char str[]) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}

int main() {
    char hi[] = {'H', 'i', ' ', 'a', 'l', 'l', '!', '!' }; 
    char helloeveryone[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ',
                             'e', 'v', 'e', 'r', 'y', 'o', 'n', 'e', '!' };
    puts(hi);
    // puts(helloeveryone);
    // printf("%ld\n", my_strlen(hi));
    // printf("%ld\n", my_strlen(helloeveryone));
}
