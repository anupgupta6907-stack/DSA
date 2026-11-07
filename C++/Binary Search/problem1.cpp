#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int n=2;
    int start =0,end =4;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==n){
            cout<<n <<" found at index "<< mid;
            break;
        }
        else if(n<arr[mid]){
           end = mid-14; 
        }
        else{
            start = mid+1;
        }


    }
    return 0;
}