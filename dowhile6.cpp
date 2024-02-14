#include <iostream>
using namespace std;

int main () {
    int num1, num2, num3, p;
    do {
        p = 0;
        cin >> num1 >> num2 >> num3;
        p = num1 + num2 + num3;
    }while(num1 <= 0 || num2 <= 0 || num3 <= 0);
    cout << p;

    return 0;
}

