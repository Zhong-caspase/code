// 分支和循环
//结构：顺序、选择、循环

// if语句
// 格式：
// if(表达式)
//  语句
// 0——假；非0——真
/*判断是否为奇数*/
// int main()
// {
//     printf("输入一个数");
//     int num = 0;
//     scanf("%d",&num);
//     if(num %2 != 0)//==表示判断是否相等，!=表示判断不等；这里在 C 里 -3 % 2 的结果是 -1，不是 1。所以 num % 2 == 1 对负数会漏判。
//         printf("%d是奇数",num);
//     return 0;
// }

// else语句
// if(表达式)
//     语句1
// else
//     语句2
// #include<stdio.h>
// int main()
// {
//     long long int num = 0;
//     printf("输入一个数：");
//     scanf("%lld",&num);
//     if(num %2 != 0)
//         printf("%lld是奇数",num);
//     else
//         printf("%lld是偶数",num);
//     return 0;
// }

// 分支有多条语句：if默认只管一条语句
// #include<stdio.h>
// int main()
// {
//     int age = 0;
//     printf("你几岁？\n");
//     scanf("%d",&age);
//     if(age >= 18)
//         {
//         printf("你成年了，\n");
//         printf("可以谈念爱了！\n");
//         }
//     else
//         printf("滚去学习！");
//     return 0;
// }

// 嵌套if：
#include<stdio.h>
int main()
{
    int num = 0;
    printf("输入一个数：");
    scanf("%d",&num);
    if(num == 0)
            printf("%d不是正数也不是负数",num);
    else
        {
            if(num > 0)
                printf("%d为正数",num);
            else
                printf("%d为负数",num);
        }
    return 0;
}