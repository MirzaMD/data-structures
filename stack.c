#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct stack
{
    int a[MAX];
    int top;
};
typedef struct stack st;

void createaemptystack(st *s){
    s->top==-1;
}

int isfull(st *s)
{
    if(s->top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(st *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push(st *s,int x){
    if(isfull(s)){
        printf("stack is full");
    }
    else{
        s->top++;
        s->a[s->top]=x;
    }
}

void pop(st *s)
{
    if(isempty(s)){
        printf("stack is empty");
    }
    else{
        s->top--;
    }
}

void dispaly(st *s){
    for(int i=0 ; i<MAX ;i++){
        printf("%d",s->a[i]);
    }
}

int main()
{
    st *s = (st*)malloc(sizeof(st));
   push(s,10);
   push(s,20);
   push(s,30);

   display();

   pop(s);

   return 0;
}

