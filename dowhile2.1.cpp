#include <iostream>
using namespace std;

int main () {
    int b, sum = 0, num, br = 0;
    cin >> b;
    do {
        cin >> num;
        if(num % 4 == 0) {
            sum += num;
        }
        br++;
    } while(sum <= b);
    cout << br;
    return 0;
}



