#include <stdio.h>
int isPrime(int num);
int primesum(int ps_num);

int main() {
    int num;
    printf("정수 입력: ");
    scanf("%d",&num);

    int res = isPrime(num);
    if(res == 1)
        printf("소수입니다");
    else
        printf("소수가 아닙니다.");
    return 0;
}

int isPrime(int num){
    for(int i = 2; i < num; i++){
        if(num%i != 0)
            return 1;
        else
            return 0;
    }
}

int primesum(int ps_num){
    int ps_num;
    int p1, p2;
    p2 = ps_num - p1;
    //찾으려는 수에서 첫번째 소수를 뺀다
    //뺀 값이 소수이면 소수의 합으로 출력가능하다
    //첫번째 소수를 증가시킨다
    //증가한 값이 소수가 아니면 다시 증가 반복한다
    //증가한 값이 소수면 1, 2번 부터 다시 실행
    //메인함수에서 중첩반복문으로 가능함
}