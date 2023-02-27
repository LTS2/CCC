#include <stdio.h>

int main(void)
{
    int nFee = 1000;
    int Person, Baby, Kids, Teenager, Adult;

    printf("나이를 입력하세요. : ");
    scanf("%d", &Person);

    Baby = nFee * 0;
    Kids = nFee * 0.5;
    Teenager = nFee * 0.75;
    Adult = nFee * 1.0;

    if (Person <= 3)

        printf("영유아입니다. 가격은 %d원 입니다.", Baby);

    else if (Person <= 13)
    {
        printf("어린이입니다. 가격은 %d원 입니다.", Kids);
    }

    else if (Person <= 19)
    {
        printf("청소년입니다. 가격은 %d원 입니다.", Teenager);
    }

    else if (Person > 19)
    {
        printf("성인입니다. 가격은 %d원 입니다.", Adult);
    }
    return 0;
}
