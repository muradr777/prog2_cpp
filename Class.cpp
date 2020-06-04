#include <iostream>
using namespace std;

class A {
public:
    A(int i) {
        cout << "Construct A" << endl;
    }
};
class B {
public:
    B(int i) {
        cout << "Construct B" << endl;
    }
};

void test(const B& crArg) {
    cout << "test" << endl;
}

int main() {
    test(12);

    return 0;
}