# include<iostream.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		// Print Number from 1 to i
		for ( int j = 1; j <= i; ++j) {
			cout << j;
		}

		// Print '*' from 1 to n-i
		for (int k = 1; k <= n - i; ++k) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}