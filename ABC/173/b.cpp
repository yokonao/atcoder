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
    int N;
    cin >> N;
    vector<string> S(N);
    rep(i, N)
    {
        cin >> S[i];
    }
    int C0 = 0;
    int C1 = 0;
    int C2 = 0;
    int C3 = 0;
    rep(i, N)
    {
        if (S[i] == "AC")
        {
            ++C0;
        }
        else if (S[i] == "WA")
        {
            ++C1;
        }
        else if (S[i] == "TLE")
        {
            ++C2;
        }
        else
        {
            ++C3;
        }
    }
    cout << "AC x " << C0 << endl;
    cout << "WA x " << C1 << endl;
    cout << "TLE x " << C2 << endl;
    cout << "RE x " << C3 << endl;
}