#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        // Print numbers
        for (int j = 1; j <= N - i; ++j) {
            cout << j << " ";
        }

        // Print stars: count = 2*i - 1 => on 0th row = 0 stars, 1st = 1, 2nd = 3, etc.
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}