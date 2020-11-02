#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A[i];
    }
    sort(A.rbegin(), A.rend());
    ll ans = 0;
    rep(i, N - 1)
    {
        ans += A[(i + 1) / 2];
    }
    cout << ans << endl;
}
