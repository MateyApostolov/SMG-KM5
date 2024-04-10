#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int num[n], k;
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cin >> k;
    for(int i = 0; i < n; i++) {
        num[i] += k;
    }
    for(int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    return 0;
}

