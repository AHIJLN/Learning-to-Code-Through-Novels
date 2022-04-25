#include <stdio.h>
int p,b;char a[10000];
int main(int argc,char *argv[]){
FILE *z=fopen(argv[1],"r");
b=getc(z);
//putchar(b);
while((b=getc(z))>0){
switch(b){
  case '>':p++;break;
  case '+':a[p]++;break;
  case '.':putchar(a[p]);break;}};}

