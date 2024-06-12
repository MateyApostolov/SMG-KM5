#include <iostream>
using namespace std;

int main () {
    int m, n, h = 0;
    char s;
    cin >> m >> n >> s;
    for(int i = 0; i < m * n - 2; i++) cout << s;
    cout << "\n";
    for(int i = 0; i < n - 2; i++) {
        for(int x = 0; x < m * n - 2; x++) {
            if(x == 0) cout << s;
            else {
                if(h == n - 1) {
                    cout << s;
                    h = 0;
                } else cout << " ";
            }
        }
        cout << "\n";
    }
    for(int i = 0; i < m * n - 2; i++) cout << s;
    return 0;
}
