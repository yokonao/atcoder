#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<signed long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    signed long long ans = 0;
    if (a[0] == 0)
    {
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != 0)
            {
                if ((a[i] > 0 && i % 2 == 0) || (a[i] < 0 && i % 2 == 1))
                {
                    ++ans;
                    a[0] = 1;
                    break;
                }
                else
                {
                    ++ans;
                    a[0] = -1;
                    break;
                }
            }
            else
            {
                if (i == n - 1)
                {
                    ++ans;
                    a[0] = 1;
                }
            }
        }
    }
    if (a[0] > 0)
    {
        signed long long sum = a[0];
        for (int i = 1; i < n; ++i)
        {
            if (i % 2 == 1)
            {
                if (sum + a[i] < 0)
                {
                    sum += a[i];
                }
                else
                {
                    ans += sum + a[i] + 1;
                    sum = -1;
                }
            }
            else
            {
                if (sum + a[i] > 0)
                {
                    sum += a[i];
                }
                else
                {
                    ans += abs(sum + a[i] - 1);
                    sum = 1;
                }
            }
        }
    }
    else
    {
        signed long long sum = a[0];
        for (int i = 1; i < n; ++i)
        {
            if (i % 2 == 1)
            {
                if (sum + a[i] > 0)
                {
                    sum += a[i];
                }
                else
                {
                    ans += abs(sum + a[i] - 1);
                    sum = 1;
                }
            }
            else
            {
                if (sum + a[i] < 0)
                {
                    sum += a[i];
                }
                else
                {
                    ans += sum + a[i] + 1;
                    sum = -1;
                }
            }
        }
    }
    cout << ans << endl;
}
