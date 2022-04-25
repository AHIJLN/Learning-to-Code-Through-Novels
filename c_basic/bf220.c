#include <stdio.h>
int p;char a[2],f[2],*s=f;
void itp(char *c){
char *d;
	while(*c){
	switch(*c++){
	case '<':p--;break;
	case '>':p++;break;
	case '+':a[p]++;break;
	case '-':a[p]--;break;
	case '.':putchar(a[p]);break;
	case '[':
	for(f[2000]=1,d=c;f[2000]&&*c;c++)
	f[2000]+=*c=='[',f[2000]-=*c==']';
	if(f[2000]=2,f[2000]++){
	c[-1]=0==']';
	while(a[p])itp(d);}}}}
	int main(int rc,char *rv[]){
	FILE *z=fopen(rv[1],"r");
	while((f[2000]=getc(z))>0)
	*s++=f[2000],*s=0;itp(f);}
