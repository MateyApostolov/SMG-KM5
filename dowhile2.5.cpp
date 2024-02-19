#include <iostream>
using namespace std;

int main () {
    int num, pr, sum = 0;
    cin >> num;
    sum += num;
    do {
        pr = num;
        cin >> num;
        sum += num;
    } while (pr != 1 || num != 1);
    cout << sum;

    return 0;
}

