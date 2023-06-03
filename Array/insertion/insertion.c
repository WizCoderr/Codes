#include<stdio.h>
void insertToStart(int* arr,int key){
    int i=0;
    while(arr[i]!=0){
        i++;
    }
    int j=i;
    while(j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[0]=key;
}

void insertToEnd(int* arr, int key){
    int i=0;
    while(arr[i]!=0){
        i++;
    }
    arr[i]=key;
}

void insertAtIndex(int* arr,int index,int key){
    int i=0;
    while(arr[i]!=0){
        i++;
    }
    int j=i;
    while(j>=index){
        arr[j+1]=arr[j];
        j--;
    }
    arr[index]=key;`
}

void printArr(int* arr){
    int i=0;
    while(arr[i]!=0){
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    insertToStart(arr,10);
    insertToEnd(arr,30)
    return 0;
}