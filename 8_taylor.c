#include <stdio.h>
#include <math.h>
double fact();

int main() {
    int x, n;
    double res;
    printf("x,n 입력: ");
    scanf("%d %d", &x, &n);
    for(int i; i < n; i++)
        res += pow(x,i)/fact(i);
    printf("e^%d = %.3lf",x,res);
}

double fact(int n){
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
} 