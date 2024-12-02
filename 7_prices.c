#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define arrSize 10
int main() {
    srand(time(NULL));
    int prices[arrSize];
    for(int i = 0; i < arrSize; i++){
        prices[i] = rand()%100;
    }
    int min = prices[0];
    for(int j = 1; j < arrSize; j++){
        if(prices[j] < min)
            min = prices[j];
    }
    for(int i = 0; i < arrSize; i++){
        printf("prices[%d] = %d\n",i,prices[i]);
    }

    int max = prices[0];
    int index = 0;
    for(int i = 0; i < arrSize; i++){
        if(prices[i] > max){
            max = prices[i];
            index = i;
        }
    }
    printf("min_price = %d\n",min);
    printf("max_price = %d\n", max);
    printf("max_price_index = %d\n",index);
}