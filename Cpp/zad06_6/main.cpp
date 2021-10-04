#include <iostream>

//Natan Tylczyński

using namespace std;

int main() {
    int K = 0, S = 0, n, a;
    cin >> n;

    do {
        cin >> a;
        S += a;
        K++;
    } while (K < n || S >= 100);

    cout << S;

    return 0;
}
