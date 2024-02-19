#include <iostream>
using namespace std;

int main () {
    int num, pr, br = 0;
    cin >> num;
    br++;
    do {
        pr = num;
        cin >> num;
        br++;
    } while (pr != 0 || num != 0);
    cout << br;

    return 0;
}

