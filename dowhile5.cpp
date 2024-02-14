#include <iostream>
using namespace std;

int main () {
    int num1, num2, br = 0;
    do {
        cin >> num1 >> num2;
        br += 2;
    }while(num1 != num2 || (num1 <= 0 && num2 <= 0 && num2 == num1));
    cout << br;

    return 0;
}
