#include <iostream>
using namespace std;

int main () {
    int b, k, mul = 1, num, br = 0;
    cin >> b >> k;
    do {
        cin >> num;
        if(num % k == 0) {
            mul *= num;
        }
        br++;
    } while(mul <= b);
    cout << br;
    return 0;
}


