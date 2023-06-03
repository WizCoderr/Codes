#include<iosteam.h>
using namespace std;

void search(int* arr,int key){
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]==key){
            cout<<"Found at index "<<i<<endl;
            return;
        }
    }
    cout<<"Not Found"<<endl;
    return;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    search(arr,5);
    return 0;
}