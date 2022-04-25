#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode {
    int data;//数据域
    struct StackNode *next;//指针域,这里用next或者pre都行，看怎么规定左右了，如果是左进左出那就是next，右进右出就是pre好理解
} StackNode;

typedef struct LinkedStack {
    int size;//栈长度
    int max;//栈最大容量
    struct StackNode *top;//指针域
} LinkedStack;

//初始化
LinkedStack *initStack(int max)
{
    struct LinkedStack *stack;
    stack = (struct LinkedStack *)malloc(sizeof(struct LinkedStack));
    stack->size = 0;
    stack->max = max;
    stack->top = NULL;
    return stack;
}
//压栈
void push(LinkedStack *stack, int item)
{
    if (stack->size >= stack->max)
    {
        printf("stack is full! \n");
    }else{
        struct StackNode *node;
        node = (struct StackNode *)malloc(sizeof(struct StackNode));
        node->data = item;
        node->next = stack->top;
        stack->size++;
        stack->top = node;
    }
}
//出栈
int pop(LinkedStack *stack)
{
    if (stack->size > 0)
    {
        struct StackNode *top;
        top = stack->top;
        stack->top = top->next;
        stack->size--;
        return top->data;
    }
}
int main()
{
    struct LinkedStack *stack;
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
