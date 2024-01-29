#include <iostream>
using namespace std;

int main () {
    int a, b, h;
    cin >> a >> b;
    while(b != 0) {
        h = a;
        a = b;
        b = h % b;
    }
    cout << a;


    return 0;
}

