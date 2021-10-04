#include <iostream>

//Natan Tylczyński

using namespace std;

int main() {
    int b = 0, liczba;

    cin >> liczba;

    if (liczba % 2 == 0 && liczba > 10) {
        b = liczba + 1;
    } else if (liczba % 2 == 0) {
        b = liczba;
    }

    cout << b;

    return 0;
}
