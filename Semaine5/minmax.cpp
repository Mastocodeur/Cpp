#include <stdexcept>
#include <iostream>
using namespace std;

int min(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

int main() {
    int a = 5;
    int b = 8;
    cout << "Le minimum de " << a << " et " << b << " est " << min(a,b) << endl;
}
