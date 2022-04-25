#include <stdio.h>
int p;
char a[20000],o,b;
/*
char a[1350]是我写的hw+p.bf的字节数为1350
如果char a[]定义的字节数小于bf文件，则只能识別当中的一些字符，所以char a[]里面的数字要大于代码的字符数。
*/
int main(int argc,char *argv[]){
/*
int   argc  
   这个东东用来表示你在命令行下输入命令的时候，一共有多少个参数。
char   *argv[]  
   这个东东用来取得你所输入的参数 

*/
FILE *z=fopen(argv[1],"r");
while((b=getc(z))!=EOF){
switch(o=1,b){
//  case '<':p--;break;
//  case '>':p++;break;
  case '+':a[p]++;break;
//  case '-':a[p]--;break;
  case '.':putchar(a[p]);break;
  }
}
b=getc(z);}
