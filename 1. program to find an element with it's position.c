#include<stdio.h>
int main(){
    int size;
    printf("enter size of the array :  ");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements :  ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int key,flag=0;
    printf("enter element to be find :  ");
    scanf("%d",&key);
    for(int i=0;i<size;i++){
        if(arr[i]==key){
           printf("%d exists at position %d",arr[i],i+1);
           flag=1;
           break;
        }
    }
    if(flag ==0){
        printf("element does not exists in the array");
    }
    return 0;
}
