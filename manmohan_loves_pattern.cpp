#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (i % 2 != 0) {
            // Odd row: print '1' i times
            for (int j = 1; j <= i; ++j) {
                cout << "1";
            }
        } else {
            // Even row: print '1', then (i-2) zeros, then '1'
            cout << "1";
            for (int j = 1; j <= i - 2; ++j) {
                cout << "0";
            }
            cout << "1";
        }
        cout << endl;
    }
    return 0;
}