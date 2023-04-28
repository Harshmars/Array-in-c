#include<stdio.h>
#include<stdlib.h>
void input_output_arr(int **arr,int row,int column,int choice){
    if(choice==1){
        printf("The matrix is\n");
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    if(choice==2){
        printf("Enter Elements \n");
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                scanf("%d",&arr[i][j]);
            }
        }
    }
}

void check_Identity_matrix(int **arr,int row,int column){
    int flag=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i]-arr[j]==0){
                if(arr[i][j]!=1){
                    printf("Not Identity matrix\n");
                    return;
                }
            }
            else{
                if(arr[i][j]!=0){
                    printf("Not identity matrix\n");
                    return;
                }
            }
        }
    }
    printf("Matrix is Identity matix\n");
    return;
}

int main(){
    int **arr,row,column;
    printf("Enter row and column :  ");
    scanf("%d%d",&row,&column);
    arr=(int*)malloc(row*(sizeof(int)));
    for(int i=0;i<row;i++){
        arr[i]=(int*)malloc(column*sizeof(int));
    }

    input_output_arr(arr,row,column,2);
    check_Identity_matrix(arr,row,column);
    for(int i=0;i<row;i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}
