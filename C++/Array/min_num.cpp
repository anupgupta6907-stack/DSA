#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int n;
    int ans=INT_MAX;
    cout<<"Enter the size of numbers you want  to enter:";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the numbers you want to find the max seperated by space:";
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }

    
    for(int i=0;i<n;i++){
        if(arr[i]<ans)
            ans=arr[i];  
    }
    cout<<"The Smallest number among all is :";
    cout<<ans;


    return 0;
}