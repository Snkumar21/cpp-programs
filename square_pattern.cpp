#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (j <= i) {
                cout << i << " ";
            } else {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}