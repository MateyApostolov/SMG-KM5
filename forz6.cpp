#include <iostream>
using namespace std;

int main () {
    int n, br = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            br++;
        }
    }
    cout << br;

    return 0;
}


