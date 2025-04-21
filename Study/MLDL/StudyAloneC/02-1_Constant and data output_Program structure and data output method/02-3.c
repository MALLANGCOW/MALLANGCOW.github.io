#include <stdio.h>   // stdio.h 파일의 내용을 프로그램 안에 복사

int main(void)
{
    printf("Be happy\n");           // 문자열 "Be happy" 출력 후 줄 바꿈(\n)
    printf("1234567890\n");         // 열 번호 출력하고 줄 바꿈
    printf("My\tfriend\n");        // "My"를 출력하고 탭 위치로 이동(\t) 후에 "friend"를 출력하고 줄 바꿈
    printf("Goot\bd\tchance\n");    // "Goot"를 출력하고 한 칸 왼쪽으로 이동(\b)해 t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄 바꿈
    printf("Cow\rW\a\n");           // 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈 

    return 0;
}
