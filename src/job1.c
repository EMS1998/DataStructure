#include<stdio.h>
#define MAXSIZE 1024//应该应defin定义常量int MAXSIZE=1024;
//宏定义，不用加;#define MAXSIZE 1024;是错的
//为什么DataType要选用int？
typedef int DataType;
typedef struct{
    DataType data[MAXSIZE];
    int len;
}LinearList;
    void list_initial(LinearList *L){
        L->len=-1;
    }
    void list_destory(LinearList *L){

    }
    void display_list_length(LinearList *L){
        printf("顺序表的长度是：%d\n",L->len);
    }
    void display_list_data(LinearList *L){
        printf("欢迎欣赏data：\n");
        for (int i = 0; i < L->len; i++)
        {
            /* code */
            printf("%d\n",L->data[i]);
        }
        
    }
    void list_create(LinearList *L,int n){

    //咋把数字存进顺序表？
    //竟然用了这个
        printf("依次输入%d个存进顺序表的整数\n",n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&L->data[i]);
        //忘记了len也要增加
        L->len=i+1;
        }
        
    }
        void list_insert(LinearList *L,int x,int index){
            if(L->len+1<MAXSIZE){
                            for (int i=L->len ; i >=index; i--)
            {
                /* code */
                L->data[i]=L->data[i+1];

            }
            L->data[index]=x;
            L->len++;

            }else{
                printf("怎么办？不够空间插入了");
            }
            
        }
int main(){
    int n=0;
    int x=0;
    int index=0;
    LinearList SequenList;
    printf("给出要加多少个整数n,并且n要小于%d\n",MAXSIZE);
    scanf("%d",&n);
    list_create(&SequenList,n);
    display_list_length(&SequenList);
    display_list_data(&SequenList);
        printf("输入要插入的整数：\n");
        scanf("%d",&x);
        printf("插入到第几个方格：\n");
        scanf("%d",&index);
        list_insert(&SequenList , x, index);
        display_list_data(&SequenList);
return 0;
}