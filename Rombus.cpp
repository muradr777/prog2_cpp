#include <iostream>
using namespace std;

int height;
int center;

int drawX(int step) {
    for(int x=0; x<height; ++x) 
        cout << (x>=center-step && x<=center+step ? "*" : " ");
    cout << endl;

    return step;
}

int main() {
    cout << "Object height: " << endl;
    cin >> height;

    int step = 0;
    center = height/2;

    for(int y=0; y<height; ++y) {
        step = drawX(step);

        (y < center)
        ? (step += (height%2==0 && y==center-1) ? 0 : 1)
        : --step;
    }

    cout << "That's it!" << endl;

    return 0;
}

