#include <stdio.h>
int p,r;
char a[5000],f[5000],b,o,*s=f;
void itp(char *c){
 char *d;
 while(*c){
  switch(o=1,*c++){
  case '>':p++;break;
  case '+':a[p]++;break;
  case '.':putchar(a[p]);break;
  }
 }
}
int main(int rc,char *rv[]){
 FILE *z=fopen(rv[1],"r");
 while((b=getc(z))>0)*s++=b;
 *s=0;
 itp(f);
}
