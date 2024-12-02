#include <stdio.h>

int main() {
    double high = 0.01;
    int count =0;
    while(high <= 8800.0){
        high = high*2;
        count ++;
    }
    printf("종이접는 횟수: %d",count);
}