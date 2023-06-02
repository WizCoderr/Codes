#include<iosteam.h>
using namespace std;
void insertionSort(int * arr){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[] = {2,13,3,4,2,4,62,5,12,8,22,24}
    insertionSort(arr);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}