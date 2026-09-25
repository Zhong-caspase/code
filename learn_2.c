// C语言学习2

// 数据类型：int, float, double, char, void
// 整形：int——整数
// 浮点型：float, double——小数
// 字符型：char——字符
// 布尔型：bool——真/假
#include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     // 1. 整形 int
//     int a = 10; // 声明一个整形变量 a，并初始化为 10
//     printf("int a = %d\n", a);
//     // 2. 浮点型 float, double
//     float b = 3.14f; // 声明一个浮点型变量 b，并初始化为 3.14
//     double c = 2.718281828459045; // 声明一个双精度浮点型变量 c，并初始化为 e 的值
//     printf("float b = %f\n", b);
//     printf("double c = %.15lf\n", c); // 输出 double 类型，保留15位小数
//     // 3. 字符型 char
//     char d = 'A'; // 声明一个字符型变量 d，并初始化为 'A'
//     printf("char d = %c\n", d);
//     printf("ASCII of d = %d\n", d); // 输出字符的 ASCII 值
//     // 4. 布尔型 bool (C17 标准中没有内置 bool 类型，需要包含 <stdbool.h>)
//     bool e = true; // 声明一个布尔型变量 e，并初始化为 true
//     printf("bool e = %d\n", e); // 输出布尔值，true 为 1，false 为 0
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     printf("%zu\n%zu\n%zu\n%zu\n%zu\n%zu\n%zu\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double), sizeof(bool), sizeof(long), sizeof(short));// 输出各数据类型的字节大小
//     // sizeof(char) = 1
//     // sizeof(int) = 4
//     // sizeof(float) = 4
//     // sizeof(double) = 8
//     // sizeof(bool) = 1
//     // sizeof(long) = 4 (在32位系统中) 或 8 (在64位系统中)
//     // sizeof(short) = 2
//     return 0;
// }

// 数据类型——创建变量
// 语法形式：<数据类型> <变量名>;
// data_type variable_name;
// 例如：
// int a; // 声明一个整型变量 a
// float b; // 声明一个浮点型变量 b
// char c; // 声明一个字符型变量 c
// 变量的命名规则：
// 1. 变量名只能包含字母、数字和下划线，且不能以数字开头。
// 2. 变量名不能是C语言的关键字（如 int, float, return 等）。
// 3. 变量名区分大小写，例如 myVar 和 MyVar 是两个不同的变量。
// 4. 变量名应尽量简短，但也要清晰表达其含义，避免使用过长的名称。
// 5.变量名最好有意义
// 初始化：给变量赋初值，例如：int a = 10
// 全局变量vs局部变量：大括号外是全局变量，大括号内是局部变量。全局变量在整个程序中都可以访问，而局部变量只能在大括号中访问。
// 全局变量和局部变量同名时，局部优先
// 储存方式：局部变量通常存储在栈中，全局变量存储在静态区中。
// 尽量使用局部变量，减少全局变量的使用，以提高程序的可维护性和可读性。

// 算术操作符：+ - * / % ++ --
// +-：加法和减法
// * /：乘法和除法
// %：取模（求余数）
// #include <stdio.h>
// int main()
// {
//     int a = 4;
//     int b = 5;
//     printf("%d\n",a-b);
//     printf("%d\n",4+5);
//     printf("%d\n",a*b);
//     printf("%d\n",a/b);
//     return 0;
// }
//除法会涉及到整数除法和浮点数除法的区别，整数除法会舍弃小数部分，而浮点数除法（至少一个是小数）会保留小数部分。例如：
// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     int b = 2;
//     printf("%d\n",a/b); // 输出 2，整数除法，表示 5 除以 2 的商为 2，余1（舍去）
//     float c = 5.0;
//     float d = 2.0;
//     printf("%f\n",c/d); // 输出 2.500000，浮点数除法
//     return 0;
// }
//取模：可以用来求整数的最后一位
// int main()
// {
//     printf("%d\n",6%4); // 输出 2，6 除以 4 的余数为 2
//     return 0;
// }
// int main()
// {
//     int a = 1234;
//     printf("%d\n",a%10);// 输出 4，1234 除以 10 的余数为 4，即最后一位数字
//     return 0;
// }
//负数取模：在C语言中，负数取模的结果与被除数的符号相同。例如：
// int main()
// {
//     printf("%d\n", -5 % 3); // 输出 -2，-5 除以 3 的余数为 -2
//     printf("%d\n", 5 % -3); // 输出 2，5 除以 -3 的余数为 2
//     printf("%d\n", -5 % -3); // 输出 -2，-5 除以 -3 的余数为 -2
//     return 0;
// }

// int a = 10; //初始化
// a=20; //赋值,从右向左看
//  int main()
// {
// int a=10;
// a=a+3;// a=13
// a+=3;// a=16,复合赋值运算符，等价于 a=a+3
// a*=3;// a=48,复合赋值运算符，等价于 a=a*3
// a/=3;// a=16,复合赋值运算符，等价于 a=a/3
// a%=3;// a=1,复合赋值运算符，等价于 a=a%3
// printf("%d\n",a);
// return 0;
// }

//单目运算符：++ --
// int main()
// {
//     int a = 10;
//     a++; // a = 11，后置递增，先使用 a 的值，再加 1
//     ++a; // a = 12，前置递增，先加 1，再使用 a 的值
//     a--; // a = 11，后置递减，先使用 a 的值，再减 1
//     --a; // a = 10，前置递减，先减 1，再使用 a 的值
//     int b =a++; // a=11,b = 10，后置递增，先将 a 的值赋给 b，再将 a 加 1
//     b=++a; // a=12,b = 12，前置递增，先将 a 加 1，再将 a 的值赋给 b
//     printf("%d\n", b); // 输出 12
//     printf("%d\n", a); // 输出 12
//     return 0;
// }
// int main()
// {
//     int a=10;
//     int b=-a; // b = -10，取负号
//     printf("%d\n", b); // 输出 -10
//     return 0;
// }

//强制类型转换：
// int a=3.14; // a=3,小数部分被舍弃
// int b=(int)3.14; // b=3,小数部分被舍弃:强制类型转换

//printf可以指定占位符%d等
//%d表示会代入10进制整数
//%s表示会代入字符串
// %d--int
// %hd--short int
// %ld--long int
// %u--unsigned int
// %hu--unsigned short int
// %lu--unsigned long int...
// %f--float
// %lf--double
// %p--指针
// %c--char
// %zu--size_t
//可以指定宽度和精度
//     printf("%5d\n", 10); // 输出 5 个字符宽度的整数（左对齐，空三格）  10
//     printf("%-5d\n", 10); // 输出 5 个字符宽度的整数（右对齐，空三格）10
//     printf("%05d\n", 10); // 输出 5 个字符宽度的整数 10，前面补 0
//     printf("%.2f\n", 3.14159); // 输出浮点数，保留 2 位小数，四舍五入
//     printf("%+d\n", 10); // 输出带符号的整数，正数前加 + 号
//     printf("%+d\n", -10); // 输出带符号的整数，负数前加 - 号
//     printf("%10.3f\n", 3.14159); // 输出浮点数，宽度为 10，保留 3 位小数，右对齐
//     printf("%*.*f\n", 10, 3, 3.14159); // 输出浮点数，宽度为 10，保留 3 位小数，右对齐
//     printf("%.3s\n", "Hello"); // 输出字符串，保留前 3 个字符
// %f默认保留6位小数

//scanf
// int main()
// {
//     int score = 0;
//     printf("请输入一个整数：");
//     scanf("%d", &score);
//     printf("您输入的整数是：%d\n", score);
//     return 0;
// }
//  int main()
//  {
//     int score=0;
//     printf("score:");
//     scanf("%d",&score);//&表示取地址操作符，取score变量的地址,按下回车后读取信息
//     printf("I know your score is %d\n",score);
//     return 0;
//  }
// scanf不让用时：
// 1.#define _CRT_SECURE_NO_WARNINGS 放在代码开头
// 2.一劳永逸的方法：让每个.c文件都加上#define _CRT_SECURE_NO_WARNINGS
//  在newc++file.cpp中加上#define _CRT_SECURE_NO_WARNINGS
// int main()
// {
//     int i=0;
//     int j=0;
//     float x=0;
//     float y=0;
//     scanf("%d%d%f%f",&i,&j,&x,&y);
//     printf("i=%d\n",i);
//     printf("j=%d\n",j);
//     printf("x=%f\n",x);
//     printf("y=%f\n",y);
//     return 0;
// }
// scanf会自动忽略空格、制表符和换行符，直到遇到有效输入为止。
// int main()
// {
//     int x;
//     scanf("%d",&x);
//     printf("%d\n",x);
//     float y;
//     scanf("%f",&y);
//     printf("%f\n",y);
//     return 0;
// }
// int main()
// {
//     int a;
//     int b;
//     float c;
//     int r=scanf("%d%d%f",&a,&b,&c);
//     printf("a=%d  b=%d  c=%f  r=%d",a,b,c,r);
//     return 0;
// }
// int main()
// {
//     int a;
//     int b;
//     // 注意：while 后面不能加分号！
//     // 加了分号 -> 分号成了循环体(空语句)，下面的 {} 变成普通语句块
//     // 注意：判断相等要用两个等号 ==，一个等号 = 是赋值，会报 lvalue required 错误
//     while (2 == scanf("%d%d", &a, &b))  // scanf 返回成功读取的项数，读到 EOF 时返回 EOF(-1)
//     {
//         int c = a + b;
//         printf("%d\n", c);
//     }
//     return 0;
// }
// int main()
// {
//     // 1. 数组必须给大小：char str1[]; 缺大小又缺初值 -> array size missing
//     //    {0} 把整个数组清零，万一 scanf 失败也不会打印垃圾值
//     char str1[100] = {0};

//     // 2. %99[a-zA-Z]：只接收字母，遇到其他字符停止；99 是最大宽度(留 1 位给 '\0')，防止越界
//     //    3. 开头的空格：让 scanf 先跳过空白字符。%[...] 不像 %s 那样自动跳过换行/空格
//     scanf(" %99[a-zA-Z]", str1);

//     printf("%s\n", str1);
//     return 0;
// }
// int main()
// {
//     int a=0;
//     int b=0;
//     scanf("%d-%d",&a,&b);
//     printf("a=%d,b=%d",a,b);
//     return 0;
// }
// 赋值忽略符：%*c
// int main()
// {
//     int a=0;
//     int b=0;
//     scanf("%d%*c%d",&a,&b);
//     printf("a=%d,b=%d",a,b);
//     return 0;
// }
