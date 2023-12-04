#include <iostream>
using namespace std;

int main () {
    int s, m;
    cin >> s >> m;
    int ms = m * 60;
    int br = ms / s;
    cout << br;

    return 0;
}
