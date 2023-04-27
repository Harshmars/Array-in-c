#include<stdio.h>
#include<stdlib.h>
void input_arr(int** arr,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void print_arr(int **arr,int row,int column){
    printf("The arrayu is :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int row,column;
    int **arr;
    printf("Enter Matrix row :  ");
    scanf("%d",&row);
    printf("Enter matrix column :  ");
    scanf("%d",&column);

    arr=(int*)malloc(row*sizeof(int));
    for(int i=0;i<row;i++){
        arr[i]=(int*)malloc(column*sizeof(int));
    }

    input_arr(arr,row,column);
    print_arr(arr,row,column);
}
