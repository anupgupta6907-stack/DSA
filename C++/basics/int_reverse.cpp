#include <iostream>
using namespace std;
int main (){
    int num,rem;
    cout<<"Enter a num:";
    cin>>num;
        int ans = 0;
        while(num!=0){
            rem=num%10;
            ans = ans*10+rem;
            num/=10;
        }
        // cout<<ans;
    return 0;
}