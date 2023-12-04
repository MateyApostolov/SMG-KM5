#include <iostream>
using namespace std;

int main () {
    int a, b, help;
    cin >> a >> b;
    if(a > b) {
        help = b;
        b = a;
        a = help;
    }
    cout << a << " " << b;

    return 0;
}
