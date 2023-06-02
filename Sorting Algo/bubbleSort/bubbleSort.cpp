#include<iosteam.h>
using namespace std;
void bubbleSort(int* arr){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    }
}
int main(){
    int arr[] = {1,3,4,2,45,7,6,46,84,34,09,90}
    bubbleSort(arr);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++) cout<<arr[i]<<" ";
    return 0;
}