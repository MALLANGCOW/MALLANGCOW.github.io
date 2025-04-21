#include <stdio.h>

int main(void)
{
// unsigned를 잘못 사용한 경우, unsigned 자료형을 사용할 때는 항상 양수만 저장하고 %u로 출력하자.   
    unsigned int a;

    a = 4294967295;         // 큰 양수 저장
    printf("%u\n", a);      // %u로 출력
    printf("%d\n", a);      // %d로 출력
    a = -1;                 // 음수 저장
    printf("%u\n", a);

    return 0;

}