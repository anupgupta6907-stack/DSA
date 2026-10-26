#include <iostream>
using namespace std ;
int main()
{
    int i,j,n;
    cout<<"Input the number of lines ypu want to print:";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        };
        for(char name ='A';name<='A'+i-1;name=name+1){
            cout<<name;
            
        }
        cout<<endl;
   
    }
    
    return 0;

}



// Input the number of lines ypu want to print:10
//          A
//         AB
//        ABC
//       ABCD
//      ABCDE
//     ABCDEF
//    ABCDEFG
//   ABCDEFGH
//  ABCDEFGHI
// ABCDEFGHIJ