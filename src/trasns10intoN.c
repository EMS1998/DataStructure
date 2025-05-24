#include<stdio.h>
#include<stdlib.h>
typedef int dataType;
typedef struct Node
{
    /* data */
    dataType data;
    struct Node *next;

}Node;
    void push(Node **top,int remainder){
        Node *newNode=malloc(sizeof(Node));
        newNode->data=remainder;
        newNode->next=*top;
        *top=newNode;
    }
    int isEmpty(Node *top){
        return top==NULL;
    }
    int pop(Node **top){
        if (*top == NULL) {
        printf("栈为空！\n");
        exit(1);
    }
        Node *temp=*top;
        int remainder=temp->data;
        *top=temp->next;
        free(temp);
        return remainder;
    }
    void decToOctal(int n){
        Node *stack=NULL;
        
        while(n>0){
            int remainder=n%8;
            push(&stack,remainder);
            n/=8;

        }
        while(!isEmpty(stack)){
            printf("%d",pop(&stack));

        }
        printf("\n");
    }
int main(){
    int n;
    printf("输入要10进制整数：\n");
    scanf("%d",&n);
    printf("%d转换为8进制的结果：\n",n);
        decToOctal(n);
    return 0;

}