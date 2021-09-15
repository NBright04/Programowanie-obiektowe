#include <iostream>
#include <math.h>

using namespace std;

//Natan Tylczyński

float toRAD(float a);

int main() {
    cout << toRAD(5) << endl;
    return 0;
}

float toRAD(float a) {
    return a*(M_PI/180);
}
