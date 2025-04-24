// Example of fibonacci Pattern in c++...
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << a << "\t";
            int next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }

    return 0;
}