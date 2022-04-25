#include <stdio.h>
int p,r;
char a[5000],f[5000],b,o,*s=f;
void itp(char *c){
 char *d;
 r++;
 while(*c){
  switch(o=1,*c++){
  case '<':p--;break;
  case '>':p++;break;
  case '+':a[p]++;break;
  case '-':a[p]--;break;
  case '.':putchar(a[p]);break;
  case ',':a[p]=getchar();break;
  case '[':
   for(b=1,d=c;b&&*c;c++)b+=*c=='[',b-=*c==']';
//b&&*c，要两个值都不为0才执行  
if(b=2,b++){
    c[-1]=0==']';//本位在加时，向左移动，若左边的数值为0时，则中止运行
/*    a[-1] 当然是合法的表述方式。对 C 语言来说并不属于未定义行为。它等价于求 *(a-1),指针往回，也就是 */
    while(a[p])itp(d);}}}
r--;}
int main(int rc,char *rv[]){
 FILE *z=fopen(rv[1],"r");
 while((b=getc(z))>0)*s++=b;
 *s=0;
 itp(f);}
