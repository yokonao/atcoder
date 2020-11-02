#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, L;
    vector<string> S;
    cin >> N >> L;
    string ans = "";
    for (int i = 0; i < N; ++i)
    {
        string s;
        cin >> s;
        S.push_back(s);
    }
    sort(S.begin(), S.end());
    for (int i = 0; i < N; ++i)
    {
        ans += S[i];
    }
    cout << ans << endl;
}