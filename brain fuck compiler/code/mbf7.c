#include <stdio.h>
int p,b;char a[10000], f[20000],*s=f;
int main(int argc,char *argv[]){
FILE *z=fopen(argv[1],"r");
b=getc(z);
*s++=b;*s=0;
//printf("%d\n",b);
while((b=getc(z))>0){
switch(*s++){
  case '>':p++;break;
  case '+':a[p]++;break;
  case '.':putchar(a[p]);break;
  case '<':p--;break;
  case '-':a[p]--;break;
 // case '[':
  // for(b&&f;b++;)b+=*s=='[',b-=*s==']';
//if(b=2,*s++){
  //  f[-1]=0==']';
 //  while(a[p])itp(d);
//}
}};

printf("%d\n",f);
printf("%d\n",p);
printf("%d\n",a[p]);
printf("%d\n",b);
}
