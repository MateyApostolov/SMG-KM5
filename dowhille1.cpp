#include <iostream>
using namespace std;

int main () {
    int n, num = 1, prnum = 1, h;
    cin >> n;
    do {
        h = num;
        num += prnum;
        prnum = h;
    } while(num <= n);
    cout << num;

    return 0;
}
