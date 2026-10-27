#include <iostream>
using namespace std;

int main() {
int num;
cout << "Enter the number: ";
cin >> num;

if (num <= 0) {
    cout << "It is not the power of 2.";
}
else {
    while (num % 2 == 0) {
        num = num / 2;
    }

    if (num == 1) {
        cout << "It is the power of 2.";
    }
    else {
        cout << "It is not the power of 2.";
    }
}

return 0;

}
