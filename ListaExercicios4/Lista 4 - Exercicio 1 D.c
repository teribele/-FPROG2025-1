#include <stdio.h>

int main() {
    int i;
    for (i = 95; i >= 25; i--) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}