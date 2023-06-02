#include<stdio.h>
void binnerySearch(int* arr, int key){
    int low = 0, high = sizeof(arr)/sizeof(arr[0]);
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            printf("Found at %d", mid);
            return;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("Not Found");
}
int main(){
    int arr[] = {1,3,5,7,9,11,13,15,17,20};
    binnerySearch(arr, 20);
    return 0;
}