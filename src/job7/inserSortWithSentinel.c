#include<stdio.h>
#include<stdlib.h>
    void initialArray(int *array,int n){
    printf("输入%d个整数，用空格隔开:\n",n);
    for(int i=1;i<n+1;i++){
        scanf("%d",&array[i]);
    }
    }
    void displayArray(int *array,int n){
    
        for(int i=1;i<n+1;i++){
            printf("%d\n",array[i]);
        }
    }
    void inserSortWithSentinel(int *array,int n){
        for (int i = 2; i <n+1; i++)
        {
            /* code */
            array[0]=array[i];
            int j=i-1;
            while(array[j]>array[0]){
                array[j+1]=array[j];
                j--;
            }
            array[j+1]=array[0];//array[i]的值可能已经被前面一个数字占用

        }
        
    }
int main(){
    int n;
    printf("排序的整数有多少个呢？\n");

    scanf("%d",&n);
    int *array=(int *)malloc((n+1)*sizeof(int));
    initialArray(array,n);
    printf("给你确认一眼输入的整数：\n");
    displayArray(array,n);
    printf("插入排序，带哨兵的，结果:\n");
    inserSortWithSentinel(array,n);
    displayArray(array,n);
    free(array);
    return 0;
}