#include <stdio.h>
// 1부터 10까지의 합을 재귀호출을 함수를 사용하여 구현
int rec_func(int n);                // 함수 선언

int sum;

int main(void)
{
    sum = rec_func(10);
    printf("1부터 10까지의 합 : %d\n", sum);

    return 0;
}
int rec_func(int n)
{
    int res;

    if (n == 1)
    {
        return 1;                   // 재귀호출은 어느 순간 재귀를 멈출 포인트가 꼭 있어야 한다.
    }
    else
    {
        res = n + rec_func(n-1);
    }
    return res;
}