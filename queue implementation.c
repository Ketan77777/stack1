#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct queue
{
 int r,f;
 int data[SIZE]
};
 typedef struct queue QUEUE;

 void enqueue(QUEUE *q,int item)
 {
     if(q->r==SIZE-1)
     {
         printf("\n queue is full\n");
     }
     else{
        q->r=q->r+1;
        q->data[q->r]=item;
        if(q->f==-1)
            q->f=0;

     }
 }
 void dequeue(QUEUE *q)
 {
     if(q->f==-1)
     {
         printf("\n queue is empty!\n");
     }
     else{
        printf("\n deleted element is %d\n",q->data[q->f]);
        if(q->f==q->r)
        {
            q->f=-1;
            q->r=-1;
        }
        else
            {
        q->f=q->f+1;
        }
     }
 }
 void display(QUEUE q)
 {
     int i;
     if(q.f==-1){
     printf("\n queue is empty.\n");
 }
 else{
    printf("\n queue contents are:\n");
    for(i=q.f;i<=q.r;i++)
        printf("%d\t",q.data[i]);
 }
}
int main(){
int item,ch;
QUEUE q;
q.f=-1;
q.r=-1;
for(;;){
        printf("\n1. insert");
       printf("\n2. delete");
       printf("\n3. display");
       printf("\n4. exit");
       printf("\n read choice:");
       scanf("%d",&ch);
       switch(ch)
       {
       case 1: printf("\n Read enter element to insert:");
       scanf("%d",&item);
       enqueue(&q,item);
       break;
       case 2: dequeue(&q);
       break;
       case 3: display(q);
       break;
       default:exit(0);

       }
    }
    return 0;
}

