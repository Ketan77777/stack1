#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct stack
{
    int top;
    int data[SIZE];
};
typedef struct stack STACK;
void push(STACK*s,int item)
{
if(s->top==SIZE-1)
    printf("\n stack overflow");
    else
        {
        s->top=s->top+1;
        s->data[s->top]=item;
        }}

void pop(STACK*s)
{
if(pop==-1)
    printf("\n stack underflow");
    else
        {
            printf("\n element poped is %d",s->data[s->top]);
        s->top=s->top-1;
        }}
void display(STACK S)
{
    int i;
if(S.top==-1)
    printf("\n stack empty");
    else{
            printf("\n stack contants are \n");
            for(i=S.top;i>=0;i--)
        printf("%d\n",S.data[i]);
        }}
        int main()
        {
            int ch,item;
            STACK S;
            S.top=-1;
            for(;;)
            {
                printf("\n1.push\n2.pop\n3.display\n4.exit");
                printf("\nread choice:");
                scanf("%d\n",&ch);
            }
            switch(ch){
            case1:
                printf("read element to be pushed:");
                scanf("%d",&item);
                push(&S,item); break;
             case2:
                 pop(&S); break;
                 case3:
                 display(S); break;
default: exit (0);
}
return 0;

}
