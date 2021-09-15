#include <iostream>
#include <cstdlib>

using namespace std;

//Natan Tylczyński

int dwucyfrowa(int a);

int main() {
    cout << dwucyfrowa(111) << endl;
    return 0;
}

int dwucyfrowa(int a) {
    int temp = abs(a);
    if ((temp / 10) < 10 && (temp / 10) != 0) {
        return a;
    }
    return 0;
}