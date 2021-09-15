#include <iostream>

using namespace std;

//Natan Tylczyński

float poleTrapezu(float a, float b, float h);

int main() {
    cout << poleTrapezu(5, 10, 3) << endl;
    return 0;
}

float poleTrapezu(float a, float b, float h) {
    return ((a + b)/2)*h;
}
