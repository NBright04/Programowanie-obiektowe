#include <iostream>

//Natan Tylczyński

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A == B) {
        cout << A << "=" << B;
    } else if (A > B) {
        cout << A;
    } else {
        cout << B;
    }
    return 0;
}
