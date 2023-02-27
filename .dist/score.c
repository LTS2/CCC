//        문제) 점수를 입력받아 80점 이상이면 합격메시지를
//    *       그렇지 않으면 불합격 메시지를 출력하는 작업을 반복하다가
//    *       0에서 100점 이외의 점수가 입력되면 종료하는 프로그램
//    *
//    *
//    * 입,출력예)
//    * 점수를 입력하세요. : 50
//    * 죄송합니다. 불합격입니다.
//    * 점수를 입력하세요. : 95
//    * 축하합니다.
//    * 합격입니다.
//    * 점수를 입력하세요. : 101
#include <stdio.h>

int main(void)
{
    int score;

    printf("점수를 입력하세요. : ");
    scanf("%d", &score);

    for (;;)
    {
        if (score >= 100)
            printf("축하합니다. \n합격입니다.\n");
        break;

        if (score > 100)
            break;

        else if (score < 80)
            printf("죄송합니다. 불합격입니다.\n");

        else if (score > 100)
            break;
    }

    return 0;
}