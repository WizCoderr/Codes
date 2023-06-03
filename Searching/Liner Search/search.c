#include<stdio.h>

void search(int* arr,int key){
    int i=0;
    while(arr[i]!=key){
        i++;
    }
    if(arr[i]==key){
        printf("Found at %d",i);
    }
    else{
        printf("Not Found");
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,78,96,4,60}
    search(arr,4);
    search(arr,9);
    return 0;
}