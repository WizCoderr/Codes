#include<stdio.h>
void insertionSort(int * arr){
    int i,j;
    for(i=1;i<5;i++){
        int key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[] = {2,1,3,53,5,6,46}
    insertionSort(arr);
    printf("Sorted array is : \n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}