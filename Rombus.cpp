#include <iostream>
using namespace std;

static int height;

int drawX(int elemCnt) {
    for(int x=0; x<height; ++x) {
        if(x>=center-step && x<=center+step)
            cout << "*";
        else
            cout << " ";
    }
    if(y < center) {
        step += (height%2==0 && y==center-1) ? 0 : 1;
    } else
        --step;

    cout << endl;

    return 0;
}

int main() {
    cout << "Object height: " << endl;
    cin >> height;
    cout << "my height : " << height << endl;

    int step = 0;
    int center = height/2;
    for(int y=0; y<height; ++y) {
       
    }

    return 0;
}

