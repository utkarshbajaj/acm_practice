#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << n * n << '\n';
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1;
    cin >> tc;

    while(tc--) {
        solve();
    }

    return 0;
}