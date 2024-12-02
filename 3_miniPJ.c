#include <stdio.h>

int main() {
    short age;
    char id[8];
    int product;
    double starcount;
    char c;

    printf("나이 입력: ");
    scanf("%hi",&age);
    printf("나이: %hi\n",age);
    printf("아이디 입력: ");
    scanf("%s",&id);
    printf("아이디: %s\n",id);
    printf("별의 개수 입력: ");
    scanf("%e",&starcount);
    printf("별 개수: %lf\n", starcount);
    printf("글자 입력: ");
    c = getchar();
    scanf("%c",&c);
    printf("%c",c);

}