#include <stdio.h>
int p;
char a[20000],b;
int main(int argc,char *argv[]){
FILE *z=fopen(argv[1],"r");
b=getc(z);
//putchar(b);
while((b=getc(z))!=EOF)
switch(1,b++){
//	case '<':p--;break;
	case '>':p++;break;
	case '+':a[p]++;break;
//	case '-':a[p]--;break;
	case '.':putchar(a[p]);break;
//	case ',':a[p]=getchar();break;
}}
