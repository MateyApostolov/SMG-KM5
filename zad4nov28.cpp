#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b && a > c && c > b) {
        cout << b << " " << c << " " << a;
    }
    if(a > b && a > c && b > c) {
        cout << c << " " << b << " " << a;
    }
    if(b > a && b > c && c > a) {
        cout << a << " " << c << " " << b;
    }
    if(b > a && b > c && a > c) {
        cout << c << " " << a << " " << b;
    }
    if(c > b && c > a && a > b) {
        cout << b << " " << a << " " << c;
    }
    if(c > b && c > a && b > a) {
        cout << a << " " << b << " " << c;
    }
    return 0;
}
