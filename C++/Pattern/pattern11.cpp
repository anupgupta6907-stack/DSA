#include <iostream>
using namespace std ;
int main()
{
    int i,j,n;
    cout<<"input the number of lines ypu want to print:";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
   
    }
    
    return 0;

}

// input the number of lines ypu want to print:5
//     1
//    22
//   333
//  4444
// 55555