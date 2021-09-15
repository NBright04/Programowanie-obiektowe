#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

//Natan Tylczyński

int dwucyfrowa(int a);

int main() {
    ifstream inputFile;
    inputFile.open("dane.txt");
    string line;

    ofstream outputFile;
    outputFile.open("wynik.txt");

    while(getline(inputFile, line)) {
        int number = stoi(line);
        outputFile << dwucyfrowa(number) << endl;
    }

    outputFile.close();
    inputFile.close();

    return 0;
}

int dwucyfrowa(int a) {
    int temp = abs(a);
    if ((temp / 10) < 10 && (temp / 10) != 0) {
        return a;
    }
    return 0;
}