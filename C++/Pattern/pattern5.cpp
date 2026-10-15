#include <iostream>
using namespace std;
int main(){

    int row , col,i,j;

    cout <<"Enter the number of rows  you want:";
    cin >> row;

    // cout <<"Enter the number of columns  you want:";
    // cin >> col;
    
    for (i=1;i<=row;i++)
    {
        for (j =1;j<=i;j++)
        {
            cout << j;
        }
        cout <<"\n";
    }
    return 0;

}



// 1
// 12
// 123
// 1234
// 12345