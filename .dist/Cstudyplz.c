#include <stdio.h>

int main(void)
{
    int time;

    printf("초를 시간으로 변환해드립니다 시 분 초 :");
    scanf_s("%d", &time, 40); // 타임에 값 받기

    int hour = time / 3600;
    int min = (time % 3600) / 60;
    int sec = (time % 3600) % 60;
    // 2번 수정

    printf("입력하신 %d은 %d시 %d분 %d 초 입니다.", time, hour, min, sec);
    // 맥으로 올린다.
    return 0;
}