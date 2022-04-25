#include <stdio.h>
 
int main ()
{
   /* for 循环执行 */
   for( int a = 10; a < 20; a = a + 1 )
   {
      printf("a 的值： %d\n", a);

   }
 
   return 0;
}

//10(int a=10)
//11(a=a+1)
//......
//19(a<20)
