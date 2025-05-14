#include <stdio.h>
// 조건 연산자 : 삼항 연산자로 ?와 : 기호를 함께 사용
// 첫 번째 피연산자가 참이면 두 번째 피연산자가 결괏값이 되고, 첫 번째 피연산자가 거짓이면 세 번째 피연산자가 결괏값이 된다.

int main(void)
{
    int a = 10, b = 20, res;

    res = (a > b) ? a : b;      // a와 b 중에 큰 값이 res에 저장
    printf("큰 값 : %d\n", res);

    return 0;
}