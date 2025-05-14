#include <stdio.h>
// while문은 조건식을 먼저 검사하고 조건식이 참인 동안 실행문을 반복.
int main(void)
{
    int a = 1;                  // 변수를 선언하고 곱셈을 하기 위해 1로 초기화

    while (a < 10)              // 1. a가 10보다 작으므로 조건식은 참
    {
        a = a * 2;              // 2. a에 2를 곱해 a에 다시 저장
    }
    printf("a : %d\n", a);

    return 0;
}