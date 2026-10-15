#include <iostream>
using namespace std;
int main(){

    int num,line,i,j;

    cout <<"Enter the number from where  you want to start:";
    cin >> num;

    cout <<"Enter the number of lines you want:";
    cin >> line;
    
    for (i = 1;i<=line;i++)
    {
        for (j =num;j>=1;j--)
        {
            cout << j;
        }
        cout <<"\n";
    }
    return 0;

}


// 54321
// 54321
// 54321
// 54321
// 54321