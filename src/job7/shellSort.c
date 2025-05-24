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
    void shellSort(int *array,int n){
        for (int gap = n/2; gap >0; gap/=2)
        {
            for (int i = gap; i < n; i++)
            {
                /* code */
                int temp=array[i];
                int j=i;
                while (j>=gap&&array[j-gap]>temp)
                {
                    /* code */
                    array[j]=array[j-gap];
                    j-=gap;
                }
                
                array[j]=temp;
            }
            
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
    printf("shell排序结果:\n");
    shellSort(array,n);
    displayArray(array,n);
    free(array);
    return 0;
}