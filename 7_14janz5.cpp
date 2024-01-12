#include <iostream>
using namespace std;

int main () {
    int s, brk3 = 0, sum = 1;
    cin >> s;
    while(s != 0) {
        cin >> s;
        if(s % 3 == 0 && s != 0) {
            sum *= s;
            brk3++;
        }
    }
    if(brk3 == 0) {
        cout << "NO";
    } else {
        cout << sum;
    }


    return 0;
}
