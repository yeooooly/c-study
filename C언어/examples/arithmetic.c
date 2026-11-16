#include <stdio.h>

int main(void)
{
    int a, b;
    int sum, sub, mul, inv, mod;
    float div, div_nocast;

    a = 10;
    b = 20;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div_nocast = a / b;          // 캐스팅 X: 정수 나눗셈으로 먼저 0이 됨 -> 0.0
    div = (float)a / (float)b;   // 캐스팅 O: 이 식에서만 실수로 바꿔 계산 -> 0.5
    mod = a % b;                 // 나머지: 정수끼리만 가능 -> 10
    inv = -a;

    printf("a :%d, b=%d\n", a, b);
    printf("sum :%d\n", sum);
    printf("sub :%d\n", sub);
    printf("mul :%d\n", mul);
    printf("inv :%d\n", inv);
    printf("div (no cast) :%f\n", div_nocast);
    printf("div (cast)    :%f\n", div);
    printf("mod :%d\n", mod);

    return 0;
}
