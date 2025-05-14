# include <stdio.h>

// 연산자 우선순위와 연산 방향 : 하나의 수식에서 2개 이상의 연산자가 함께 쓰일때는 우선순위에 따라 계산.
// 단항 연산자 > 이상 연산자 > 삼항 연산자 순서로 연산
// 산술 연산자 > (비트 이동 연산자) > 관계 연산자 > 논리 연산자 순서로 연산

int main(void)
{
    int a = 10, b = 5;
    int res;

    res = a / b * 2;                // 우선순위가 같으므로 왼쪽부터 차례로 연산
    printf("res = %d\n", res);
    res = ++a * 3;                  // a의 값을 1증가시키고 3을 곱한다.
    printf("res = %d\n", res);
    res = a > b && a != 5;          // a > b의 결과와 a != 5의 결과를 && 연산
    printf("res = %d\n", res);
    res = a % 3 == 0;               // a % 3의 값이 0과 같은지 확인
    printf("res = %d\n", res);

    return 0;
}