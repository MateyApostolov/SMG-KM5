#include <iostream>
using namespace std;

int main () {
    int b, sum = 0, num, ngnum = 0;
    cin >> b;
    do {
        cin >> num;
        sum += num;
        if(ngnum < num) {
            ngnum = num;
        }
    } while(sum <= b);
    cout << ngnum;

    return 0;
}

