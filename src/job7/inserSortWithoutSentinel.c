#include<stdio.h>
#include<stdlib.h>
    void initialArray(int *array,int n){
    printf("输入%d个整数，用空格隔开:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    }
    void displayArray(int *array,int n){
    
        for(int i=0;i<n;i++){
            printf("%d\n",array[i]);
        }
    }
    void inserSortWithoutSentinel(int *array,int n){
        for (int i = 1; i <n; i++)
        {
            /* code */
            int temp=array[i];
            int j=i-1;
            while(j>=0&&temp<array[j]){
                array[j+1]=array[j];
                j--;
            }
            array[j+1]=temp;

        }
        
    }
int main(){
    int n;
    printf("排序的整数有多少个呢？\n");

    scanf("%d",&n);
    int *array=(int *)malloc(n*sizeof(int));
    initialArray(array,n);
    printf("给你确认一眼输入的整数：\n");
    displayArray(array,n);
    printf("插入排序，不带哨兵的，结果:\n");
    inserSortWithoutSentinel(array,n);
    displayArray(array,n);
    free(array);
    return 0;
}