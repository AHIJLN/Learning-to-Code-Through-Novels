#include<stdio.h>

int main(int argc,char *argv[])
{
	int b;
	char *z=(stdin);
   printf("Enter character: ");
   b=getc(z);
   printf("Character entered:  ");
   putc(b,stdout);
   
   return(0);
}


