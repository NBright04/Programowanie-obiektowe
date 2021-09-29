#include <iostream>

using namespace std;

int main() {
    const int n = 5; //rozmiar tablicy
    // deklarowanie zmiennej tablicowej
    double tab[n];

    //wprowadzanie z klawiatury wszystkich elementow tablicy
    for(double& element : tab) {
        cout << "element = ";
        cin >> element;
    }

    /*
     * UWAGA
     * w petli for powyzej zmienna element oznacza kopie elementu tablicy...
     */
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
