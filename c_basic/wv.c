#include <stdio.h>

int a,b;
void wv(){
/* for( int c = 10; c < 20; c++ )
printf("a is %d\n",c);
*/

int c=10;
while (c<20){
  printf("a is %d\n",c);
  c++;
}

wv(b);
}

int main(){
wv(a);
return 0;
}


