#include <stdio.h>

int main() {
    double light_speed = 3.0e5;
    double dis = 1.496e8;
    double time; 
    printf("빛의 속도: %lfkm/s\n", light_speed);
    printf("지구에서 태양까지 거리: %lfkm\n", dis);

    time = (dis/light_speed)/60.0;
    printf("지구에서 태양까지 도달시간: %lf분", time);
}