#include <stdio.h>

int c; 
int main ()
{
   /* for 循环执行 */
   for( int a =1;c<5;c++)
// for( int a =1,c=1;a&&c;a=c)

   {

printf("a的zz:%p\n",a);
printf("c的zz:%p\n",c);
        a+=c;
	printf("a 的值： %d\n", a);
	printf("c 的值： %d\n", c);



printf("a的zz:%p\n",a);
printf("c的zz:%p\n",c);



   }
 
   return 0;
}

//10(int a=10)
//11(a=a+1)
//......
//19(a<20)
