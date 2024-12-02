#include <stdio.h>

int main() {
    int day;
    int tmp;
    int year;
    int week;

    printf("총 일수 입력: ");
    scanf("%d", &day);      //389
    year = day/365;     //1
    week = (day%365)/7;       //3
    day = day - (year*365+week*7);
    printf("%d년, %d주, %d일", year, week, day);

}