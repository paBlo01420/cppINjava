#include <iostream>

using namespace std;

int main() {
    int age[8];

    for (int i=0; i < 8; i++) {
        age[i] = (i+1) * 10;
    }

    for (int i=0; i < 8; i++) {
        cout << age[i] << " ";
    }

    return 0;
}
