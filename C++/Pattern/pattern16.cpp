#include <iostream>
using namespace std ;
int main()
{
    int i,j,n;
    cout<<"Input the number of lines ypu want to print:";
    cin>>n;

    for(i=n;i>=1;i--){
        for(j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        // for(j=1;j<=n-i;j++){
        //     cout<<" ";
        // }
        cout<<endl;
   
    }
    
    return 0;

} 