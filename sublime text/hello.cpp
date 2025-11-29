#include <bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
bool comp(point a, point b){
    int dist_a=a.x*a.x+a.y*a.y;
    int dist_b=b.x*b.x+b.y*b.y;
    return dist_a<dist_b;
}
int main(){
    int n;
    cin>>n;

    return 0;

}
#include <bits/stdc++.h>
using namespace std;

// Common shortcuts for Competitive Programming
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

// Faster newline
#define endl "\n"

void solve() {
    // Your solution logic goes here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}