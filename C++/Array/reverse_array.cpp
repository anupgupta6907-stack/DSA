// #include <iostream>
// using namespace std;
// int main(){

//     int arr[5]={4,5,3,8,9};
//     for(int i = 5 ; i>0 ;i--){
//       cout<<arr[i-1]<<" , ";
//     }
//     return 0;

// }


// Above i  only printed the array in reverse order not reverse the actual arr 
#include <iostream>
using namespace std;
int main(){

    int arr[5]={4,5,3,8,9};
    int start=0,end=4;
    while(start<end){

        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i =0;i<5;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}