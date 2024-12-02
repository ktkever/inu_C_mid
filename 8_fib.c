#include <stdio.h>
#include <time.h>

int fib();

int main() {
    clock_t s = clock();
    int N;
    printf("n = ");
    scanf("%d",&N);
    for(int i=0; i<=N; i++)
        printf("%d\n",fib(i));
    clock_t e = clock();                //순환호출시 N이 커질수록 호출수 기하급수적 증가(중복해서 호출하기 때문)
    printf("%d",(double)(e-s)/CLOCKS_PER_SEC);                   //while문을 이용해서 순환호출 대체 가능, 더 효율적
}

int fib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
        
    else{
        return fib(n-2) + fib(n-1);
    }
}