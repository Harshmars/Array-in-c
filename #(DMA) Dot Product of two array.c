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
int DotProduct(int *arr1,int *arr2,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr1[i]*arr2[i];
    }
    return sum;
}
void TakeInput(int* arr,int size){
    P("Enter Array Elements :  ");
    for(int i=0;i<size;i++){
        S("%d",&arr[i]);
    }
}
int main(){
    int size;
    P("Enter size of the array :  ");
    S("%d",&size);
    int *arr1=(int*)calloc(size,sizeof(int));
    int *arr2=(int*)calloc(size,sizeof(int));
    TakeInput(arr1,size);
    TakeInput(arr2,size);
    P("dot product is %d",DotProduct(arr1,arr2,size));

}
