#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int *data;//数据域
    int size;//栈长度,也是栈顶数组下标-1
    int max;//栈最大容量
} Stack;
//初始化
Stack *initStack(int max)
{
    struct Stack *stack;
    stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->size = 0;
    stack->max = max;
    stack->data = (int*)malloc(sizeof(int)*max);
    return stack;
}
//压栈
void push(Stack *stack, int item)
{
    if (stack->size >= stack->max)
    {
        printf("stack is full! \n");
    }else{
        stack->data[stack->size++] = item;
    }    
}
//出栈
int pop(Stack *stack)
{
    if (stack->size >= 0)
    {
        return stack->data[--stack->size];
    }
}
//test
int main()
{
    struct Stack *stack;
    stack = initStack(3);
    push(stack,1);
    push(stack,2);
    push(stack,3);
    push(stack,4);
    printf("stack out:%d \n", pop(stack));
    printf("stack out:%d \n", pop(stack));
    push(stack,5);
    push(stack,6);
    push(stack,7);    
    printf("stack out:%d \n", pop(stack));
    printf("stack out:%d \n", pop(stack));
    printf("stack out:%d \n", pop(stack));
    return 0;
}
