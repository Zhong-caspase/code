#include <stdio.h>

// 一个简单的加法函数，用来演示"单步进入"(F11)
int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int x = 5;
    int y = 3;
    int sum = 0;

    printf("start calculation\n");
    sum = add(x, y);        // 在这行按 F11 会进入 add 函数内部
    printf("sum = %d\n", sum);

    // 循环演示：按 F10 一步步走，观察变量 i 和 sum 的变化
    for (int i = 0; i < 3; i++)
    {
        printf("loop %d\n", i + 1);
        sum = sum + i;
    }
    printf("final sum = %d\n", sum);
    return 0;
}
