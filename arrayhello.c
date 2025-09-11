#include <stdio.h>
//c-style array hello world

int main() {
    char a[5] = {'H', 'e', 'l', 'l', 'o'};
    for (int i = 0; i < 5; i++) {
        printf("%c", a[i]);
    }
    return 0;
}