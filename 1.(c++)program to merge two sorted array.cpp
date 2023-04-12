#include<iostream>
using namespace std;
void merge_two_sorted_arry(int arr[],int st,int mid,int en){
	int size=en,indx1=st,indx2=mid,x=0;
	int temp[100];
	while (indx1<mid&&indx2<en){
		if (arr[indx1] <= arr[indx2]){
			temp[x++] = arr[indx1++];
		}
		else{
			temp[x++]=arr[indx2++];
		}
	}
	while (indx1<mid){
		temp[x++]=arr[indx1++];
	}
	while (indx2<en){
		temp[x++]=arr[indx2++];
	}
	for (int i = 0; i < size; i++){
		arr[i]=temp[i];
	}
}

int main()
{
	int arr[] ={2,5,6,9,10,14,1,3,4,7,8,15,16}; //{1,3,5,6,8,15,27,2,4,7,9,10,17};
	int size = sizeof(arr) / sizeof(arr[0]);
	merge_two_sorted_arry(arr,0,6,size);
	for (int i = 0; i < size; i++){
		cout <<" "<< arr[i];
	}
	return 0;
} 
