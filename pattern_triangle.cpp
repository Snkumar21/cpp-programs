#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        // Print leading tabs for spacing
        for (int space = 1; space <= N - i; ++space) {
            cout << "\t";
        }

        int num = i;

        // Increasing part
        for (int j = 1; j <= i; ++j) {
            cout << num << "\t";
            num++;
        }

        // Decreasing part
        num -= 2;  // Adjust num back for descending
        for (int j = 1; j < i; ++j) {
            cout << num << "\t";
            num--;
        }

        cout << endl;
    }

    return 0;
}