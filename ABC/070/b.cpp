#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = min(b, d) - max(a, c);
    if (ans <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}