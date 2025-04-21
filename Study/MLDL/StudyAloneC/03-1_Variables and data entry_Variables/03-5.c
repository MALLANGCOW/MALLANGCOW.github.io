#include <stdio.h>

int main(void)
{
    float ft = 1.234567890123456789;        // 유효 숫자가 많은 값으로 초기화
    double db = 1.234567890123456789;

    printf("float형 변수의 값 : %.20f\n", ft);// 소수점 이하 20자리까지 출력
    printf("double형 변수의 값 : %.20lf\n", db);

    return 0;

                                            
}
// 실수형은 저장하는 값에 따라 숫자가 가 정확하게 표현될 수도 있고 그렇지 않을 수도 있다.
// 실수를 표현하는 방식이 오차를 가지고 있기 때문. float은 유효숫자 7자리, double은 15자리 범위 내로 사용.