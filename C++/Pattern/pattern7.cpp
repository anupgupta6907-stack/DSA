#include <iostream>
using  namespace std;
int main(){
    for(int i = 1 ; i<=5;i++)
    {
        char name ='a' +i-1;
        for (int j=i;j>=1;j--){
            cout << name<<" ";
            
        }
        cout << "\n";
        
    }
    
    return 0;
}