#include <iostream>
using namespace std;
int main(){
    int arr[5]={7,4,2,3,5};
    for(int i =0;i<4;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
        for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}