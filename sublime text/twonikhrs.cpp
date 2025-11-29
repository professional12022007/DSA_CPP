
#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    for (long long i = 1; i <= n; i++) {
        long long total_ways = (i * i) * (i * i - 1) / 2ll;
        long long attacking_ways = 4ll * (i - 1) * (i - 2);
        cout << total_ways - attacking_ways << endl;
    }

    return 0;
}
