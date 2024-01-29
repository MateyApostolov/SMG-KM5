#include <iostream>
using namespace std;

int main () {
    int n, pr;
    cin >> n;
    pr = n;
    while(n != 0) {
        cin >> n;
        if(n == pr) {
            cout << "YES";
            return 0;
        }
        pr = n;
    }
    cout << "NO";

    return 0;
}
