#include <stdio.h>
int b;
int main(int argc,char *argv[]){
FILE *z=fopen(argv[1],"r");
b=getc(z);
//putchar(b);
while((b=getc(z))>0){
//b=getc(z);
putchar(b);
//printf("%d\n",b);
};}

