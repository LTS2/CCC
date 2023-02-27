#include <stdio.h>

/*삼항 연산자 예제-1
융자로부터 cm 단위의 키를 입력받아 키가 150cm 이상이면, ‘합격’ 이라고 출력하고 그렇지 않으면 ‘불합격’이라고 출력하는 프로그램을 작성하세요. 단, 반드시 삼항 연산자를 사용하세요. 참고로 문자열도 삼항 연산자의 선택 대상(피연산자)이 될 수 있습니다.*/
int main(void)
{
    int dan;
    int times;

    for (dan = 1; dan <= 9; dan++)
    {
        for (times = 1; times <= 9; times++)
        {
            printf("%d X %d = %d\n", dan, times, (dan * times));
            if (times == dan)
                break;
        }
        printf("\n");
    }
    return 0;
}
