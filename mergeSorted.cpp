#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int arr1[1000], arr2[1000];

    for(int i = 0; i < n; i++) {
        cin>>arr1[i];
    }
    for(int i = 0; i < m; i++) {
        cin>>arr2[i];
    }

    int idx1 = 0, idx2 = 0;

    while (idx1 < n && idx2 < m) {
        int candinate1 = arr1[idx1];
        int candinate2 = arr2[idx2];

        if(candinate1 < candinate2) {
            cout<<candinate1<<" ";
            idx1++;
        } else {
            cout<<candinate2<<" ";
            idx2++;
        }
    }

    while(idx1 < n){
        cout<<arr1[idx1]<<" ";
        idx1++;
    }
    
    while(idx2 < m){
        cout<<arr2[idx2]<<" ";
        idx2++;
    }

    return 0;
}