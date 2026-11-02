#include <iostream>
using namespace std;
int main (){
    int num,rem;
    cout<<"Enter a num:";
    cin>>num;
    int x=num;
    int ans = 0;
    if (num<0)
    {
        /* code */
        cout<< 0;
    }
    else{
        while(num!=0){
        rem=num%10;
        ans = ans*10+rem;
        num/=10;
        }
        if (x==ans)
        cout<<1;
        else
        cout<<0;
    }

    return 0;
}