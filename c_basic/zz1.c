#include <stdio.h>
int a;
char f[6],*p=f;
int main(){

printf("a的z:%d\n",a);
printf("a的zz:%p\n",a);
printf("f的str:%s\n",f);
printf("f的zz:%p\n",f);
printf("f的d:%d\n",f);
printf("p的zz:%p\n",&*p);
printf("p的d:%d\n",p);
int a=123;
*p++=a;

printf("a的z:%d\n",a);
printf("a的zz:%p\n",a);
printf("f的str:%s\n",f);
printf("f的zz:%p\n",f);
printf("f的d:%d\n",f);
printf("p的zz:%p\n",&*p);
printf("p的d:%d\n",p);

}
