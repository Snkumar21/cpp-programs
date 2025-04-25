#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[1000];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int maxOnLeft[1000];
    maxOnLeft[0] = -1;
    int maxSoFar = arr[0];

    for(int i = 1; i < n; i++) {
        maxOnLeft[i] = maxSoFar;
        maxSoFar = max(maxSoFar, arr[i]);
    }

    return 0;
}