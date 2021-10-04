#include <iostream>

//Natan Tylczyński

using namespace std;

int main() {
    int a, b;

    do {
        cin >> a >> b;
    } while (a > b);

    int S = 0, K = a;

    do {
        S += K;
        K++;
    } while (K <= b);

    cout << S;

    return 0;
}
