#include <iostream>
using namespace std;
int main(){
    int arr[8]={1,4,6,8,10,14,16,18};
    int target=5;
    int expected_index;
    int start =0,end =7;
    while(start<=end){
        int index = start +(end - start)/2;
        if(arr[index]==target){
            cout<<target <<" found at index "<< index;
            break;
        }
        else if(arr[index]>target){
           end = index-1; 
           expected_index=index;
        }
        else{
            start = index+1;
            expected_index=index+1;
        }


    }
    if(start>end)
    // cout<<expected_index;
    cout<<start;
    return 0;
}