#include<stdio.h>
#include<stdlib.h>
int main(){
    int **p,row,column;
  
    //--inputing row column from user--//
    printf("Enter row of the matix :  ");
    scanf("%d",&row);
    printf("Enter column of the matix :  ");
    scanf("%d",&column);
  
  
    p=(int**)calloc(row,row);//creating p[0]..and..p[1]
    p[0]=(int *)calloc(column,row);//creating p[0] indx1 indx2
    p[1]=(int *)calloc(column,row);//creting p[1] indx1 indx2 indx3
    
    //--taking input from user--//
    printf("Enter array Elements"):
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&p[i][j]);
        }
    }
    
    //--printing Elements--//
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
  return 0;
}
