#include <iostream>

using namespace std;

//Natan Tylczyński

float najwieksza(int a, int b, int c);

int main() {
    cout << najwieksza(5, 4, 3) << endl;
    return 0;
}

float najwieksza(int a, int b, int c) {
    if(a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    }
    return c;
}
