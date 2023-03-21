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
    printf("enter which element is to be removed from the array :  ");
    scanf("%d",&key);
    for(int i=0;i<size;i++){
        if(flag==1){
            arr[i-1]=arr[i];
        }
        if(arr[i]==key){
           flag=1;
        }
    }
    for(int i=0;i<size-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
