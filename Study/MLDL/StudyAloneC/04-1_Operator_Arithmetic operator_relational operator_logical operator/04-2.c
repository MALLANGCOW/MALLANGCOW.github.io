#include <stdio.h>

int main(void)
{
    double apple;               // 실수
    int banana;                 // 정수
    int orange;                 // 정수

    apple = 5.0/2.0;            // 실수와 실수의 나누기 연산(/)
    banana = 5 / 2;             // 정수와 정수의 나누기 연산(/)
    orange = 5 % 2;             // 정수와 정수의 나머지 연산(%)

    printf("apple : %.1lf\n", apple);
    printf("banana : %d\n", banana);
    printf("orange : %d\n", orange);

    return 0;

    // 실수 연산에는 나머지의 개념이 없으므로 나머지 연산자의 피연산자로는 반드시 정수만 사용
}