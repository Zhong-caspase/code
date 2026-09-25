#include <stdio.h>

int main()
{
    // 1. 同一个数字 65，用不同的"眼镜"看
    int n = 65;
    printf("== the same number 65, in different formats ==\n");
    printf("%%d -> %d\n", n);   // 十进制：65
    printf("%%c -> %c\n", n);   // ASCII 字符：A
    printf("%%x -> %x\n", n);   // 十六进制：41
    printf("%%o -> %o\n", n);   // 八进制：101

    // 2. 字符的本质就是 ASCII 码（数字）
    char ch = 'a';
    printf("\n== ASCII code of 'a' ==\n");
    printf("'a' as %%d -> %d\n", ch);   // 97
    printf("'a' as %%c -> %c\n", ch);   // a

    // 3. 字符可以当作数字来运算
    printf("\n== char arithmetic ==\n");
    printf("'A' + 1 -> %c\n", 'A' + 1);       // B（65+1=66）
    printf("'z' - 'a' -> %d\n", 'z' - 'a');   // 25（两个码相减）

    // 4. 打印 ASCII 表（可见字符 32~126）
    printf("\n== ASCII table (32 ~ 126) ==\n");
    for (int i = 32; i <= 126; i++)
    {
        printf("%3d:%c  ", i, i);
        if ((i - 32) % 6 == 5)
            printf("\n");
    }
    printf("\n");

    return 0;
}
