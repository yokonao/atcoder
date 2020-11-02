#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    vector<int> L;
    cin >> N >> K;
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        int l;
        cin >> l;
        L.push_back(l);
    }
    sort(L.rbegin(), L.rend());
    for (int i = 0; i < K; ++i){
        ans += L[i];
    }
    cout << ans << endl;
}