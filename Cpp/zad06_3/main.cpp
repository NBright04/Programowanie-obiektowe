#include <iostream>

//Natan Tylczyński

using namespace std;

int main() {
    int A, B, Z, Y;
    cin >> A >> B;

    if(A <= 0 && B <= 0) {
        Z = 1;
        Y = 0;
    } else if (A <= 0 && B >= 0) {
        Z = 2;
        Y = 1;
    } else if (A > 0 && B <= 0) {
        Z = 3;
        Y = 2;
    } else {
        Z = 4;
        Y = 3;
    }

    cout << Z << " " << Y;

    return 0;
}
