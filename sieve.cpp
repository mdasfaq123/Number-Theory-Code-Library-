#include <bits/stdc++.h>
using namespace std;
const int N = 1e8 + 9;
bitset<N> f;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 1e8;
    f.set();
    f[0] = f[1] = 0;

    for (int i = 2; i * 1LL * i <= n; i++) {
        if (f[i]) {
            for (int j = i * 1LL * i; j <= n; j += i) {
                f[j] = 0;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (f[i]) primes.push_back(i);
    }

    cout << primes.size() << '\n';
    return 0;
}
