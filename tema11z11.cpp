#include <iostream>
using namespace std;

int main () {
    int n, ngn = 0;
    cin >> n;
    while(n != 0) {
        if(n % 2 == 1 && n > ngn) {
            ngn = n;
        }
        cin >> n;
    }
    if(ngn == 0) {
        cout << "NO";
    } else {
        cout << ngn;
    }

    return 0;
}
