#include <iostream>
using namespace std;

int sum() {
    int a, b;
    cout << "Type a:";
    cin >> a;
    cout << "Type b:";
    cin >> b;
    cout << "res: " << a + b << endl;
    
    return 0;
}

int main() {
    sum();
    return 0;
}
