#include<iosteam.h>
using namespace std;

void search(int* arr,int key){
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]);
    int mid = (low+high)/2;
    while(low<=high){
        if(arr[mid]==key){
            cout<<"Found at "<<mid<<endl;
            return;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<"Not Found"<<endl;
    return;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}
    search(arr,10);
    return 0;
}