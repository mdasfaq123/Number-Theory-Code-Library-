#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int GCD(int a, int b)
{
    if(a == 0) return b;
    if(b == 0) return a;
    if(a < b) swap(a, b);
    return GCD(a % b, b);
}
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y;
    cin >> x >> y;
    cout << GCD(x, y) << endl;
    return 0;
}
