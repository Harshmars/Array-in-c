#include<stdio.h>

int find_min_max_element(int arr[],int size,int *mn,int *mx){
    if(size<0){
        return 0;
    }
    if(*mn>arr[size]){
        *mn=arr[size];
    }
    if(*mx<arr[size]){
        *mx=arr[size];
    }
    return find_min_max_element(arr,size-1,mn,mx);
}

int main(){
    int size;
    printf("enter size of the array :  ");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements :  ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int mn=9999,mx=-9999;
    find_min_max_element(arr,size-1,&mn,&mx);
    printf("minimume value is %d\n",mn);
    printf("maximume value is %d",mx);
    return 0;
}
