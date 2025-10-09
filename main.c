#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<math.h>
#define SIZE 10
struct stack
{
int top;
float data[SIZE];
};
typedef struct stack STACK ;
void push(STACK *s,char item)
{
    s->data[++(s->top)]=item;
}
float pop(STACK *s)
{
 return s->data[(s->top)--];
}
int preced(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':return 1;
    case '*':
    case '/':return 3;
    case '^':return 4;
    }
}
void infixtopostfix(STACK *s,char infix[20])
{
