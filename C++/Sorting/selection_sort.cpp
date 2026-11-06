#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {10, 2, 8, 1, 7};
    
    // cout<<ans;
    for (int j = 0;j<4;j++){
        int ans =INT_MAX;
        int index;
        for(int i = j;i<5;i++){
        if(arr[i]<ans){
               ans=arr[i];
               index=i;
        }

    } 
        // cout<<ans;
        // cout<<index;
        swap(arr[j],arr[index]);
            
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// 1 2 7 8 10 
// ascending order 