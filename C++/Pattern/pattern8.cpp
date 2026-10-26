#include <iostream>
using namespace std;
int main(){
    // int row,col;
    // cout <<"Enter the number of rows pattern you want:";
    // cin >> row;
    // cout <<"Enter the number of stars you want to start with:";
    // cin >> col;
    for (int i=1;i<=5;i++){
        for(int j=i;j<=5;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
