#include<stdio.h>
void BubbleSort(int* arr){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }
        }
    }
}
int main(){
    int arr[] = {1,3,5,5,9,5,3,96,1090,500,900}
    BubbleSort(arr);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}