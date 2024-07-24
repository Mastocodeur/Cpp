#include <stdexcept>
/** @file **/
#include "fibonacci.h"
int fibonacci(int n) {
    int u1 = 1;
    int u2 = 1;
    int tmp = 0;
    if ( n == 1 or n == 2 ) {
        return 1;
    } else {
        for ( int i = 3; i <= n; i++ ) {
            tmp = u2;
            u2 = u1 + u2;
            u1 = tmp;
        }
        return u2;
    }
}

