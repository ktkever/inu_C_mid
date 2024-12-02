#include <stdio.h>

int main() {
    int x = 20;
    int y = 30;

    int tmp;
    
    tmp = x;
    x = y;
    y = tmp;

    printf("%d, %d", x, y);
}