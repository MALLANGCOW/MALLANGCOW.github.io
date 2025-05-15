#include <stdio.h>
// 재귀호출 함수. 자기 자신을 호출한다.
void fruit(void);                   // 함수 선언

int main(void)
{
    fruit();                        // 함수 호출

    return 0;
}

void fruit(void)                    // 재귀호출 함수 정의
{
    printf("apple\n");
    fruit();                        // 자기 자신을 다시 호출
}
// 실행해보면 무한 출력 하다가 메모리 부족으로 강제 종료된다.