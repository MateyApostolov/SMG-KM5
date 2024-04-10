#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int n, h = 0;
    cin >> n;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            for(int i2 = 2; i2 < i; i2++) {
                if(i % i2 == 0 && i != 2) {
                    h = 1;
                }
            }
            if(h == 0){
                cout << setw(2) << i;
            }
        }
        h = 0;
    }

    return 0;
}
