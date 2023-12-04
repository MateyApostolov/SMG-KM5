#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int gr = 5;
    int brgr = n / 5;
    int brk = n % 5 / 3 + n % 5 % 3;
    cout << brgr << " puti dwete kofi i " << brk << " puti kofa za tri litra.";

    return 0;
}
