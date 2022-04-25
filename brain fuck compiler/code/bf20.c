#include <stdio.h>
int p,r;
char a[5000],f[5000],b,*s=f;
void itp(char *c){
	char *d;
 while(*c){
  switch(*c++){
  case '<':p--;break;
  case '>':p++;break;
  case '+':a[p]++;break;
  case '-':a[p]--;break;
  case '.':putchar(a[p]);break;
  case ',':a[p]=getchar();break;
  case '[':for(b=1,d=c;b&&*c;c++){b+=*c=='[',b-=*c==']';}
	if(b=2){ c[-1]=0==']';}
	while(a[p])itp(d);}}}
int main(int rc,char *rv[]){
 FILE *z=fopen(rv[1],"r");
 while((b=getc(z))>0)*s++=b;
 *s=0;itp(f);}
