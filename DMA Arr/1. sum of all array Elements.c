#include<stdio.h>
#define P printf
#define S scanf
int FindSum(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    int *arr;
    P("Enter size of the array :  ");
    S("%d",&size);
    arr=(int*)malloc(size*sizeof(int ));
    if(arr==NULL){
        P("Error");
        return 0;
    }
    P("Enter numbers :  ");
    for(int i=0;i<size;i++){
        S("%d",&arr[i]);
    }
    int sum=FindSum(arr,size);
    P("%d",sum);
    free(arr);
    return 0;
}
