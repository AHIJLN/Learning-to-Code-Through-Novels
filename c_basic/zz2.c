#include <stdio.h>

int main(){
    int arr= { 99, 15, 100, 888, 252 };
char *p=arr[]; 


//   int *p = &arr[2];  //也可以写作 int *p = arr + 2;

printf("arr[]的zz:%p",arr[i]);
printf("p的zz:%p",p);

    printf("%d, %d, %d, %d, %d\n", *(p-2), *(p-1), *p, *(p+1), *(p+2) );
    return 0;


printf("arr[]的zz:%p",arr[i]);
printf("p的zz:%p",p);
}
