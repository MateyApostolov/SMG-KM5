#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++) {
        num[i] = i * i;
    }
    for(int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    return 0;
}

