#include <iostream>
using namespace std;

int x = 5;
int main() {
    int x = 0;

    cout << "Zugriff auf globale x: " << ::x << endl;
    cout << "Zugriff auf lokale x: " << x << endl;

    return 0;
}