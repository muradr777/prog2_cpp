#include <iostream>
using namespace std;

int _unsigned() {
    for(unsigned int ui = 5; ui-- > 0;)
        cout << ui << endl;
    return 0;
}

enum Farbe {ROT, BLAU, GRUEN};

void _enum() {
    Farbe r = Farbe::ROT;
    cout << r << endl;
}

int _isizes() {
    char c;
    short s;
    int i;
    long l;
    long long ll;

    cout << sizeof(c) << endl << sizeof(s) << endl << sizeof(i) << endl << sizeof(l) << endl<< sizeof(ll) << endl; 

    return 0;
}

int main() {
    // _sizes();
    // _unsigned();
    _enum();

    return 0;
}