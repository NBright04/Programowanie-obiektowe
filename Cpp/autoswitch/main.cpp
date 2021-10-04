#include <iostream>

using namespace std;

class Auto {
private:
    bool drive = false;
public:
    void start() {
        if(!drive) {
            drive = true;
            cout << "startuje i jade\n>";
        } else {
            cout << "juz jade\n>";
        }
    }
    void stop() {
        if(drive) {
            drive = false;
            cout << "zatrzymuje sie\n>";
        } else {
            cout << "juz stoje\n>";
        }
    }
};

void menu();

int main() {
    cout << "zaczynamy zabawe" << endl;

    Auto newAuto;
    bool exit = false;
    string a;
    menu();

    while (!exit) {
        cin >> a;
        if(a == "pomoc") {
            menu();
        } else if (a == "start") {
            newAuto.start();
        } else if (a == "stop") {
            newAuto.stop();
        } else if (a == "koniec") {
            exit = true;
        } else {
            cout << "err\n>";
        }
    }

    return 0;
}

void menu() {
    cout << "pomoc - wyswietla pomoc\n";
    cout << "start - uruchamia auto\n";
    cout << "stop - zatrzymuje auto\n";
    cout << "koniec - koniec programu\n>";
}
