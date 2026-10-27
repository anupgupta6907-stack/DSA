#include <iostream>
using namespace std;
int main (){
    int year;
    cout<< "Enter the year you want to check if its leap year or not :";
    cin>>year;
    if(year<0){
        cout<<" Enter valid positive year";
    }
    else if (year%400==0 or (year%4==0 and year%100 !=0))
    {
             cout<<year<<" is leap year";
    }
    else{
        cout<<year<<" is not leap year";
    }

    
    return 0;
}