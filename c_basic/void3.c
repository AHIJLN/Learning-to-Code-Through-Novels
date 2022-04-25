#include <stdio.h>
int main(){
int a=10;
void *ptr=&a;
printf("%d\n",*(int *)ptr);
return 0;

}
