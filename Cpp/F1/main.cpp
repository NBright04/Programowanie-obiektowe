#include <iostream>

using namespace std;

//Natan Tylczyński

float toMM(float a);

int main() {
    cout << toMM(2) << endl;
    return 0;
}

float toMM(float a) {
    return a*25.3995;
}
