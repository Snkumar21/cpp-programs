// Find the maximum of all elements on the left side in an array using: -
// arr = { 1, 3, 1, 2, 5, 9, 3, 6, 8}
// arr = { -1, 1, 3, 3, 3, 5, 9, 9, 9}

#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin>>n;
    int arr[1000];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int maxOnleft[1000];
    maxOnleft[0] = -1;

    for(int i = 1; i < n; i++) {
        int maxEleOnLeft = arr[0];
        for (int j = 1; j < i; j++) {
            if(arr[j] > maxEleOnLeft) {
                maxEleOnLeft = arr[j];
            }
        }
        maxOnleft[i] = maxEleOnLeft;
    }

    // print results: maximum element on the left for each position
    for (int i = 0; i < n; ++i) {
        cout << maxOnleft[i];
        if (i + 1 < n) cout << " ";
    }
    cout << endl;

    return 0;
}