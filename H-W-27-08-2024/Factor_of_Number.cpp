#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> find_factors(int n) {
    vector<int> factors;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}

int main() {
    int number = 36;
    vector<int> factors = find_factors(number);
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
    return 0;
}
