#include <stdio.h>
int p,r;
char a[5000],f[5000],b,o,*s=f;
int main(int rc,char *rv[]){
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
   if(!b){
    c[-1]=0;
    while(a[p])itp(d);
    c[-1]=']';
    break;
   }
  }
 }
 r--;
}
 FILE *z=fopen(rv[1],"r");
 while((b=getc(z))>0)*s++=b;
 *s=0;
 itp(f);
}


