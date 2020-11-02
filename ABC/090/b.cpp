#include <iostream>
#include <vector>
using namespace std;

vector<int> digits(int n)
{
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    return v;
}

int main()
{
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for (int i = A; i <= B; ++i)
    {
        vector<int> v = digits(i);
        int n = v.size();
        bool flag = true;
        for (int j = 0; j < n; ++j)
        {
            if (v[j] != v[n - 1 - j])
            {
                flag = false;
                continue;
            }
        }
        if (flag == true)
        {
            ++ans;
        }
    }
    cout << ans << endl;
}