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
    int key,place;
    printf("enter which element is to be add in the array :  ");
    scanf("%d",&key);
    printf("enter place : ");
    scanf("%d",&place);
    if(place>size){
        printf("beyond original array size");
        return 0;
    }
    for(int i=0;i<size;i++){
        if(i>=place){
            arr[i+1]=arr[i];
        }
    }
    arr[place]=key;
    for(int i=0;i<size+1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
