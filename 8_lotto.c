#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 45
int main() {
    int i;
    srand(time(NULL));
    int arr[6] = {0};
    for(i = 0; i < 6; i++){
        int num = 1+rand()%Max;
        arr[i] = num;
        printf("%d ",arr[i]);
    }
    
}