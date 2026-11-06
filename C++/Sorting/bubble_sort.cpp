#include <iostream>
using namespace std;
int main(){
    int arr[5] = {7,4,8,1,5};
    for(int j=4;j>0;j--){
        for(int i = 0;i<j+1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}