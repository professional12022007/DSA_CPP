#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long c = 0;
    long long prev = a[0];
 
    for(int i = 1; i < n; i++) {
        if(a[i] < prev) {
            c += prev - a[i];
        } else {
            prev = a[i];
        }
    }
    cout << c;
    return 0;
}
