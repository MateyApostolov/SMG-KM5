#include <iostream>
using namespace std;

int main () {
    int n, h, s, d, e, c1, c2, br = 0;
    do {
        cin >> n;
        h = n / 1000;
        s = n / 100 % 10;
        d = n / 10 % 10;
        e = n % 10;
        c1 = h * 10 + s;
        c2 = d * 10 + e;
        br++;
    } while(c1 != c2);
    cout << br;

    return 0;
}
