#include <stdexcept>
/** @file
    Un exemple de programme utilisant la bibliothèque fibonacci
 **/

#include <iostream>
#include "fibonacci.h"
using namespace std;


int main() {
    int n;
    cout << "Entrez un entier : " << endl;
    cin >> n;
    cout << "Fibonacci(" << n << ") vaut "<< fibonacci(n) << endl;
    return 0;
}

