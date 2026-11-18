#include <stdio.h>

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);

int main(void)
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    printf("result : %d\n", result);

    result = sub(a, b);
    if (result >= 0)
        printf("result : %d\n", result);
    else
        printf("negative result : %d\n", result);

    result = mul(a, b);
    printf("result : %d\n", result);

    return 0;
}

int sum(int x, int y)
{
    int temp;
    temp = x + y;
    return temp;
}

int sub(int x, int y)
{
    int temp;
    temp = x - y;

    if (temp >= 0) return temp;
    else return -1;
}

int mul(int x, int y)
{
    int temp;
    temp = x * y;
    return temp;
}
