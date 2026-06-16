#include <iostream>
#include <vector>
using namespace std;

void fibonacci(int n) {
    if (n <= 0) return;
    vector<int> fib(n);
    fib[0] = 0;
    if (n > 1) fib[1] = 1;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        if (i >= 2) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << fib[i] << " ";
    }
}

int main() {
    fibonacci(1100);
    return 0;
}
