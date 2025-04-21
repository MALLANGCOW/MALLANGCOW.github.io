#include <stdio.h>

int main(void)
{
    char fruit[20] = "strawberry";                // char 배열 선언과 문자열 초기화
    // fruit = "banana";                           
    // 대입 연산은 대상 자료형의 크기가 일정해야 수행가능하다. 선언에 따라 크기가 달라지는 char 배열에 대입 연산 불가.
    // 또한 배열명은 주소 상수이므로 대입 연산자 왼쪽에 쓸 수 없다. 대입 연산자 왼쪽에는 변수가 와야한다.
    printf("딸기 : %s\n", fruit);                  // 배열명으로 저장된 문자열 출력
    printf("딸기쨈 : %s %s\n", fruit, "jam");      // 문자열 상수를 직접 %s로 출력

    return 0;
}