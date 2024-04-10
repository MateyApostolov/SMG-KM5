#include <iostream>
using namespace std;

int main () {
    int n, nc[50];
    cin >> n;
    bool t = true, st = false;
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
    }
    for(int i = 0; i < n; i++) {
        while(nc[i] > 1 && t) {
            if(nc[i] % 2 == 0) nc[i] /= 2;
            else t = false;
        }
        if(nc[i] == 1 && t) st = true;
        t = true;
    }
    if(st) cout << "YES";
    else cout << "NO";

    return 0;
}
