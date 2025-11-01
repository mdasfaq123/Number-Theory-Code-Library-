#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int32_t main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector < int > divs;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            divs.push_back(i);
            if(i != (n / i)) divs.push_back(n / i);
        }
    }
    sort(divs.begin(), divs.end());
    for(int i = 0; i < divs.size(); i++){
        cout << divs[i] << endl;
    }
    return 0;
}
