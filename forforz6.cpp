#include <iostream>
using namespace std;

int main () {
    int n, sum = 0;
    cin >> n;
    for(int i = 2; i < n; i++) {
        for(int d = 1; d < i; d++) {
            if(i % d == 0) {
                sum += d;
            }
        }
        if(sum == i) {
            cout << i << " ";
        }
        sum = 0;
    }

    return 0;
}
