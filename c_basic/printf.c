#include <stdio.h>
int main(void)
{
   int num;
num=1;

printf ("I am  a simple ");
printf ("Computer.\n");
printf ("My favorite number is %d because it is first.\n",num);
getchar();
return 0;


}

/**
$gcc -o printf printf.c
编译生成可执行文件printf
$./printf
运行printf
ctrl+C/control+C停止运行
**/
