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
    int ans = 0;
    cin >> N;
    map<ull, int> count;
    for (ull i = 0; i < N; ++i)
    {
        ull a;
        cin >> a;
        ++count[a];
    }
    for (auto i = count.begin(); i != count.end(); ++i)
    {
        if (i->second % 2 == 1)
        {
            ++ans;
        }
    }
    cout << ans << endl;
}