#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j == 1 || j == i) {
                cout << i << "\t";
            } else {
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}