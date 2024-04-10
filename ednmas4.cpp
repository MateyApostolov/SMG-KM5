#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int num[n];
    bool t = true;
    for(int i = 0; i < n; i++) {
        for(int x = 2; x <= i / 2; x++) {
            if(i % x == 0) t = false;
        }
        if(i == 0) t = false;
        if(i == 1) t = false;
        if(i == 2) t = true;
        if(t) num[i] = 0;
        else num[i] = 1;
        t = true;
    }
    for(int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    return 0;
}


