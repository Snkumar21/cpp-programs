// Find the maximum of all the elements on the right side in an array using:
// - Single loop, store answer in new array.
// arr[] = {1, 3, 5, 2, 3, 6, 8, 2, 11, 5}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[1000];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int maxOnRight[1000];
    maxOnRight[n-1] = -1;
    int maxSoFar = arr[n-1];

    for(int i = n-2; i >= 0; i++) {
        maxOnRight[i] = maxSoFar;
        maxSoFar = max(maxSoFar, arr[i]);
    }
    return 0;
}