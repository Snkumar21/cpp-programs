#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        // Print increasing numbers from 1 to i
        for (int j = 1; j <= i; ++j) {
            cout << j << "\t";
        }

        // Print middle spaces (as tabs)
        int spaces = 2 * (N - i);
        for (int s = 1; s <= spaces; ++s) {
            cout << "\t";
        }

        // Print decreasing numbers from i to 1
        for (int j = i; j >= 1; --j) {
            cout << j << "\t";
        }

        cout << endl;
    }

    return 0;
}