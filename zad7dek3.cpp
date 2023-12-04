#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int s, d, e;
    s = n / 100;
    d = n / 10 % 10;
    e = n % 10;
    if(n % s == 0 && n % d == 0 && n % e == 0) {
        cout << "YES";
    }else {
        cout << "NO";
    }

    return 0;
}
