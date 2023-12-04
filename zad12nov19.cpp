#include <iostream>
using namespace std;

int main () {
    int M;
    cin >> M;
    int a, b, c;
    cin >> a >> b >> c;
    int umal = (M - a + b + c) / 3;
    int num1 = umal + a;
    int num2 = umal + b;
    int num3 = umal + c;
    int num1s = num1 / 100;
    int num1d = num1 / 10 % 10;
    int num1e = num1 % 10;

    int num2s = num2 / 100;
    int num2d = num2 / 10 % 10;
    int num2e = num2 % 10;

    int num3s = num3 / 100;
    int num3d = num3 / 10 % 10;
    int num3e = num3 % 10;
    cout << num1s + num1d + num1e + num2s + num2d + num2e + num3s + num3d + num3e;


    return 0;
}
