#include <iostream>
using namespace std;
int main(){

    int row , col,i,j;

    cout <<"Enter the number of rows stars you want:";
    cin >> row;

    cout <<"Enter the number of columns star you want:";
    cin >> col;
    
    for (i=1;i<=row;i++)
    {
        for (j =1;j<=col;j++)
        {
            cout << "*";
        }
        cout <<"\n";
    }
    return 0;

}


// *****
// *****
// *****
// *****
// *****