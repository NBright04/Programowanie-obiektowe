#include <iostream>

using namespace std;

int main() {
    const int n = 5;
    double tab[n];

    for(double& element : tab) {
        cout << "element = ";
        cin >> element;
    }

    double suma = 0;
    for(double element : tab) {
        suma += element;
    }

    cout << "Suma elementow tablicy wynosi: " << suma << endl;

    for(double element : tab) {
        cout << "element = " << element << endl;
    }

    return 0;
}
