#include <stdio.h>

int main(void)
{
    int a = 5, b = 5;
    int pre, post;

    pre = (++a) * 3;            // 전위형 증감 연산자
    post = (b++) * 3;           // 후위형 증감 연산자

    printf("증감 연산 후 초깃값 a = %d, b = %d\n", a, b);
    printf("전위형 : (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);

    return 0;

    // 증감 연산자의 후위 표기는 다른 연산자와 함께 사용될 때 가장 나중에 연산된다.
}