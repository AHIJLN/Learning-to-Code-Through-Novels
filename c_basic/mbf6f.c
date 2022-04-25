#include <stdio.h>
int p;
char a[10000],f[180],b,*s=f,*z;

void itp(char *c){
char *d;
while(*c){
switch(*c++){
  case '>':p++;break;
  case '+':a[p]++;break;
  case '.':putchar(a[p]);break;
  case '<':p--;break;
  case '-':a[p]--;break;
  case ',':a[p]=getchar();break;
	case '[':
  for(b=1,d=c;b&&*c;c++)
b+=*c=='[',b-=*c==']';
//开启循环  

if(b=2,b++){
   c[-1]=0==']';//本位在加时，向左移动，若左边的数值为0时，则中止运行
//关闭循环
 while(a[p])itp(d);}
//连续循环

}}}
int main(int rc,char *rv[]){
FILE *z=fopen(rv[1],"r");
//b=getc(z);
while((b=getc(z))>0)
*s++=b,*s=0;
//printf("b的content:%d\n",b);
//printf("[*s]的z:%s\n",*s);
//printf("f的content:%s\n",f);
itp(f);

//printf("b的content:%d\n",b);
//printf("[*s]的zz:%p\n",*s);
//printf("f的content:%s\n",f);

//char *s="++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.";

//itp(f);
//printf("b的值:%d\n",b);

//*s++= getc(z);
//while((*s++=getc(z))>0)
//*s=0;
//itp(f);
//*s++=y;
}
