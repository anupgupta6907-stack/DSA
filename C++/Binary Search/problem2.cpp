#include <iostream>
using namespace std;
int main(){
    int arr[8] ={2,3,3,3,3,4,5,6};
    int target =3;
    int start = 0 ,end = 7;
    int first,last;


    // for first index
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            first = mid;
            end = mid-1;
        }
        else if (arr[mid]>target){
            end = mid;
        }
        else{
            start = mid +1;
        }
        
    }
    cout<<first;
    // for last index
    start = 7 ;
    end = 0;
    while(end <= start){
        int mid = start + (end - start)/2;
        if(arr[mid]==target){
            last = mid;
            end = mid+1;
            
        }
        else if(arr[mid]>target){
            start = mid-1;
        }
        else{
            end=mid; 
        }
        
    }

    cout<<last;
    return 0;
}