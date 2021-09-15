#include <iostream>

using namespace std;

//Natan Tylczyński

float dzielenie(int a, int b);

int main() {
    cout << dzielenie(6, 0) << endl;
    return 0;
}

float dzielenie(int a, int b) {
    if(b != 0) {
        return a/b;
    }
    if(b == 0) {
        return a;
    }
}
