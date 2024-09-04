#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve_of_eratosthenes(int n) {
    vector<bool> is_prime(n + 1, true);
    vector<int> primes;
    
    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; ++p) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }

    return primes;
}

int main() {
    int n = 50;
    vector<int> primes = sieve_of_eratosthenes(n);
    
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
