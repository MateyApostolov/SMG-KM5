#include <iostream>
using namespace std;

int main () {
    int num, pr, nm;
    cin >> num;
    nm = num;
    do {
        pr = num;
        cin >> num;
        if(nm > num) {
            nm = num;
        }
    } while (pr != num);
    cout << nm;

    return 0;
}
