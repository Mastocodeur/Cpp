#include <stdexcept>
/** @file **/
#include <iostream>
#include "fibonacci.h"
using namespace std;

/** Infrastructure minimale de test **/
#define ASSERT(test) if (!(test)) cout << "Test failed in file " \
         << __FILE__ << " line " << __LINE__ << ": " #test << endl


/** Les tests de la fonction factorielle **/
void fibonacciTest() {
    ASSERT( fibonacci(1) == 1 );
    ASSERT( fibonacci(2) == 1 );
    ASSERT( fibonacci(3) == 2 );
    ASSERT( fibonacci(4) == 3 );
    ASSERT( fibonacci(5) == 5 );
    ASSERT( fibonacci(6) == 8 );
}

/** Cette fonction main ne sert qu'à lancer les tests **/
int main() {
    fibonacciTest();
    return 0;
}
