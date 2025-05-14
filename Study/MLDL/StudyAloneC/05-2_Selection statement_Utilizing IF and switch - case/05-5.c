#include <stdio.h>
// 중첩 if문에서 중괄호가 반드시 필요한 경우
int main(void)
{
    int a = 10, b = 20;

    if (a < 0)              // a가 0보다 작지만
    {
        if (b > 0)          // b가 0보다 크면 ok 출력
        {
            printf("ok");
        }
    }
    else                    // a가 0 이상이면 ok 출력
    {
        printf("ok");
    }

    return 0;
}
// 8행과 13행의 중괄호 앞에 //을 붙인 다음 컴파일하고 실행하면 ok가 출력되지 않는다.
// 컴파일러는 if문이 중첩된 경우 else를 가장 가까운 if와 연결한다. 
// 따라서 14행의 else를 9행의 if와 짝을 지어 기본 if문 안에 실행문으로 if ~ else문을 사용한 구문으로 해석한다.
// 이 경우 7행의 조건이 거짓이므로 아무것도 출력하지 않는다.
// 매달린 else 문제(Dangling else Problem)