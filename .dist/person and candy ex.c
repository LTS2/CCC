#include <stdio.h>
// 실습 문제 1
// 모든 사람이 사탕을 골고루 나눠가지려고 한다.
// 인원 수와 사탕 개수를 키보드로 입력받고
// 1인당 동일하게 나눠가진 사람 개수와 나눠주고 남은 사탕의 개수를 출력하세여.
/*
 * [실행화면]
 * 인원 수 : 29
 * 사탕 개수 : 100
 *
 * 1인당 사탕 개수 : 3
 * 남은 사탕 개수 : 13
 */
int main(void)
{
    int person, candy, result, last;

    printf("인원 수 : ");
    scanf("%d", &person);
    printf("사탕 개수 : ");
    scanf("%d", &candy);

    result = candy / person;
    last = candy / person;

    printf("1인당 사탕 개수 : %d\n 남은 사탕 개수 %d\n", result, last);

    return 0;
}