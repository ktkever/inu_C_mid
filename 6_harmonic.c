#include <stdio.h>

int main() {
    int count;
    double sum;
    printf("���� ����: ");
    scanf("%d", &count);

    for(int i = 1; i < count; i++) {
        sum += 1/(double)i;
    }
    printf("sum = %lf",sum);
}