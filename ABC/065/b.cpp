#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }
    int ans = 0;
    int light = 1;
    for (int i = 0; i < N; ++i)
    {
        ++ans;
        light = a[light - 1];
        if (light == 2)
        {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}