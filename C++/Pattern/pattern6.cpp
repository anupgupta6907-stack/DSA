#include <iostream>
using namespace std;
int main(){

    int row , col,i,j;

    // cout <<"Enter the number of rows  you want:";
    // cin >> row;

    // cout <<"Enter the number of columns  you want:";
    // cin >> col;
    
    for (i=1;i<=5;i++)
    {
        for (j =i;j>=1;j--)
        {
            cout <<j;

        }
        cout <<"\n";
    }
    return 0;

}