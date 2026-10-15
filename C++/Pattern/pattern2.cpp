#include <iostream>
using namespace std;
int main(){

    int row , col,i,j;

    cout <<"Enter the number of rows  you want:";
    cin >> row;

    cout <<"Enter the number of columns  you want:";
    cin >> col;
    
    for (i=1;i<=row;i++)
    {
        for (j =1;j<=col;j++)
        {
            cout << i;
        }
        cout <<"\n";
    }
    return 0;

}

// 11111
// 22222
// 33333
// 44444