#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int n;
    int ans=INT_MIN;
    cout<<"Enter the size of numbers you want  to enter:";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the numbers you want to find the max:";
    for(int i=0;i<n;i++){
            cin>>arr[i];
            cout<<" ";
    }

    
    for(int i=0;i<n;i++){
        if(arr[i]>ans)
            ans=arr[i];  
    }
    cout<<"The Biggest number among all is :";
    cout<<ans;


    return 0;
}
