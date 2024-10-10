#include <stdio.h>
#include <string.h>

int my_strlen(char str[]) {
    // FILL THIS IN
}

int main() {
    char hi[] = {'H', 'i', ' ', 'a', 'l', 'l', '!', '!' };
    char helloeveryone[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ',
                             'e', 'v', 'e', 'r', 'y', 'o', 'n', 'e', '!' };
    puts(hi);
    puts(helloeveryone);
    printf("%ld\n", strlen(hi));
    printf("%ld\n", strlen(helloeveryone));
}
