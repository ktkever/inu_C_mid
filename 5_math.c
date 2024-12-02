#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("계수 a,b,c 입력: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    //판별식(D) 우선 구한뒤 판별식 조건에 따라서 코드작성
    if(a==0)
    {
        float x1 = ((-c)/b);
        printf("근: %f",x1);
    }
    else if (b*b-4*a*c < 0)
    {
        printf("실근이 존재하지 않음");
    }
    else if (b*b-4*a*c >= 0)
    {
        float x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        float x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        printf("첫번째 실근: %lf\n", x1);
        printf("두번째 실근: %lf", x2);
    }
}