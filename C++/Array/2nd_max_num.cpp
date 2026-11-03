#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[5]={4,5,3,8,9};
    int ans =INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans)
            ans=arr[i];

    }
    int second_lar = INT_MIN;
    for(int i =0;i<5;i++){
        if(ans!=arr[i])
            second_lar =max(second_lar,arr[i]);

    }
    cout<<second_lar;
    return 0;
}
