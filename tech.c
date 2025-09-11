#include <stdio.h>


int main() {
    int a[10];
    int i=0;
    while (i<10) {
        scanf("%d", &a[i]);
        i++;
    }
    int min = a[0];
    for (int h=0; h<10 ;h++) {
        if (a[h]<min) {
            min = a[h];
        }
    }
    int max = a[0];
    for (int j=0; j<10 ;j++) {
        if (a[j]>max) {
            max = a[j];
        }
    }
    printf("%d\n", min);
    printf("%d\n", max);
    return 0;
}