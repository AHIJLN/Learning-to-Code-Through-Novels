#include <stdio.h>
char *p="abcd";
int main(){

printf("p的zz:%x\n",&*p);
p=p+7;
printf("p的zz:%x\n",&*p);

}
