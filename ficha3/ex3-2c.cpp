/*
 * Rewrite the programs of problem 2.7, for determining prime numbers, in order to use a function isPrime(),
 */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    if (i > sqrt(n)) {
        return 1;
    }
}

int main()
{
    int primes_found = 0;
    int current = 2;
    while (primes_found <= 100) {
        if (isPrime(current)) {
            cout << current << endl;
            primes_found ++;
        }
        current ++;
    }
}
