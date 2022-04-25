#include <stdio.h>
int p;
char a[2],f[2],*s=f;
void itp(char *c){
char *d;
 while(*c){
  switch(*c++){
  case '<':p--;break;
  case '>':p++;break;
  case '+':a[p]++;break;
  case '-':a[p]--;break;
  case '.':putchar(a[p]);break;
 // case ',':a[p]=getchar();break;
  case '[':
   for(f[221]=1,d=c;f[221]&&*c;c++)
f[221]+=*c=='[',
f[221]-=*c==']';
//b&&*c，要两个值都不为0才执行  
if(f[1]=2,f[1]++){
    c[-1]=0==']';//本位在加时，向左移动，若左边的数值为0时，则中止运行
/*    a[-1] 当然是合法的表述方式。对 C 语言来说并不属于未定义行为。它等价于求 *(a-1),指针往回，也就是 */
    while(a[p])itp(d);}}}
}
int main(int rc,char *rv[]){
 FILE *z=fopen(rv[1],"r");
 while((f[221]=getc(z))>0)
*s++=f[221],*s=0;
//printf("s zz:%p\n",s);
//printf("f zz:%p\n",f);
//printf("f content:%s\n",f);
itp(f);
//printf("s zz:%p\n",s);
//printf("f zz:%p\n",f);
//printf("f content:%s\n",f);
//printf("f content:%d\n",f);
//printf("f0 content:%p\n",f);
//printf("f1 content:%p\n",f+1);
//printf("f2 content:%p\n",f+2);
//printf("f3 content:%p\n",f+3);
//printf("f4 content:%p\n",f+4);
//printf("f218 zz:%p\n",&f[218]);
//printf("f219 zz:%p\n",&f[219]);
//printf("f219 zz:%p\n",&f[218]+1);
//printf("f218 c:%d\n",f[218]);
//printf("f219 c:%d\n",f[219]);
//printf("f219 c:%d\n",f[218]+1);
//printf("f[-1] c:%p\n",f-1);

}

