#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int count_k = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == k) count_k++;
        }

        if(count_k == 0) {
            cout << "NO" << endl; // k doesn't exist in the array
            continue;
        }

        if(n == 1) {
            // Only one element, check if it's k
            if(a[0] == k) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }

        bool found = false;
        for(int i = 0; i < n; i++) {
            if(a[i] == k) {
                // Check neighbors within distance 2
                if(i + 1 < n && a[i+1] == k) found = true;
                if(i + 2 < n && a[i+2] == k) found = true;
            }
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}