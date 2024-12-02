#include <stdio.h>

int main() {
    long long integer;
    int count;
    int i = 1;
    printf("정수 입력: ");
    scanf("%ld", &integer);

    while(integer / i >= 1) {
        count++;
        i *= 10;
    }
    printf("총 자리수: %d",count);
}