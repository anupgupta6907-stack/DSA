#include <iostream>
using namespace std;
int main(){

    int arr[5]={4,5,3,8,9};
    for(int i = 0 ; i<5 ;i++){
        if (arr[i]==7)
            cout<<"8 is present at position "<<i+1;
    }
    return -1;

}