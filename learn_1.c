// C语言学习1

// #include <stdio.h>
// int main()
// {
//     printf("Hello!");
//     return 0;
// }

// 编译器-vscode
// .c-.obj-link.exe-.exe
// .h---.c---
// .c  vs  .cpp

// main函数："开始"主函数，只能有一个main函数，程序从main函数开始执行
// 标准：
// int main()
// {
//     xxxxx代码
//     return 0;
// }

// return 0;表示程序正常结束，返回0给操作系统

// printf("%d\n", 10); // %d整数，10是要输出的
// printf("%c\n", 'A'); // %c字符，'A'是要输出的
// printf("%s\n", "Hello"); // %s字符串，"Hello"是要输出的
// printf("%f\n", 3.14); // %f浮点数，3.14是要输出的
// printf:stdio.h头文件，standard input/output library，提供了printf函数

// 字符和ASCII编码表：
// 大写字母A-Z的ASCII码是65-90
// 小写字母a-z的ASCII码是97-122
// 数字0-9的ASCII码是48-57
// 空格的ASCII码是32,32开始是可打印的
// 换行符（\n）的ASCII码是10
// #include <stdio.h>
// int main()
// {
//     int i=0;
//     for(i=32;i<=127;i++)//表示从32到127的整数，其中i++表示每次循环i的值加1
//     {
//         printf("%d=%c\n",i,i);//%d输出整数，%c输出字符
//     }
//     return 0;//return 0;表示程序正常结束，返回0给操作系统
// }
// printf("%d\n", 'a');   // 输出 97，'a' 的 ASCII 码
// printf("%c\n", 97);    // 输出 a
// printf("%c\n", 'A'+1); // 输出 B，65+1=66 对应 'B'

// 字符串：
// 字符串是字符的序列，以空字符(\0)结尾
// 字符串常量用双引号表示，如"Hello"；单引号表示单个字符，如'A'
// #include <stdio.h>
// int main()
// {
//     char str[] = "Hello";
//     printf("%s\n", str);
//     return 0;
// }

// 转义字符：
// 以反斜杠(\)开头，表示一些特殊的字符，如\n表示换行
// \?表示?(避免与三目运算符混淆)
// \'表示单引号 '(避免与字符常量混淆)
// \"表示双引号 "
// \\表示反斜杠 \
// \a响铃
// \b退格,光标向左移动一格
// \0表示空字符，字符串的结束标志
// \ddd表示八进制数，ddd是1~3位八进制数，如\101表示A
// \xhh表示十六进制数，hh是1~2位十六进制数，如\x41表示A
// 例：
// #include <string.h>
// int main()
// {
//     int len = strlen("abc");
//     printf("%d\n", len);// 输出 3，字符串"abc"的长度是3，不包括空字符(\0)
//     return 0;
// }// strlen函数：计算字符串的长度，不包括空字符(\0)
// int main()
// {
//     int len = strlen("c:\test\16\test.c");
//     printf("%d\n", len);// 输出 13,转义字符算一个
//     return 0;
// }

// /*
// 这是注释，可以写多行，但不能嵌套
// */ 