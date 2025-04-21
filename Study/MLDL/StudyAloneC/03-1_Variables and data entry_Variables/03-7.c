#include <stdio.h>
#include <string.h>

int main(void)
{
    char fruit[20] = "strawberry";                // char 배열 선언과 문자열 초기화

    printf("딸기 : %s\n", fruit);                  // 배열명으로 저장된 문자열 출력

    strcpy(fruit, "banana");                      // fruit에 banana 복사

    printf("딸기쨈 : %s\n", fruit);                // banana 출력

    return 0;
}