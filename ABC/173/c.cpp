#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f)
{
    if (rest == 0)
    {
        f(indexes);
    }
    else
    {
        if (s < 0)
            return;
        recursive_comb(indexes, s - 1, rest, f);
        indexes[rest - 1] = s;
        recursive_comb(indexes, s - 1, rest - 1, f);
    }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f)
{
    int indexes[k];
    recursive_comb(indexes, n - 1, k, f);
}

int main()
{
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> c(H);
    rep(i, H)
    {
        cin >> c[i];
    }
    vector<vector<int>> igR = {
        {},
        {1},
        {2},
        {3},
        {4},
        {5},
        {6},
        {1, 2},
        {1, 3},
        {1, 4},
        {1, 5},
        {1, 6},
        {2, 3},
        {2, 4},
        {2, 5},
        {2, 6},
        {3, 4},
        {3, 5},
        {3, 6},
        {4, 5},
        {4, 6},
        {5, 6},
        {1, 2, 3},
        {1, 2, 4},
        {1, 2, 5},
        {1, 2, 6},
        {1, 3, 4},
        {1, 3, 5},
        {1, 3, 6},
        {1, 4, 5},
        {1, 4, 6},
        {1, 5, 6},
        {2, 3, 4},
        {2, 3, 5},
        {2, 3, 6},
        {2, 4, 5},
        {2, 4, 6},
        {2, 5, 6},
        {3, 4, 5},
        {3, 4, 6},
        {3, 5, 6},
        {4, 5, 6},
        {1, 2, 3, 4},
        {1, 2, 3, 5},
        {1, 2, 3, 6},
        {1, 2, 4, 5},
        {1, 2, 4, 6},
        {1, 2, 5, 6},
        {1, 3, 4, 5},
        {1, 3, 4, 6},
        {1, 3, 5, 6},
        {1, 4, 5, 6},
        {2, 3, 4, 5},
        {2, 3, 4, 6},
        {2, 3, 5, 6},
        {2, 4, 5, 6},
        {3, 4, 5, 6},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 6},
        {1, 2, 3, 5, 6},
        {1, 2, 4, 5, 6},
        {1, 3, 4, 5, 6},
        {2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6}};
    vector<vector<int>> igC = {
        {},
        {1},
        {2},
        {3},
        {4},
        {5},
        {6},
        {1, 2},
        {1, 3},
        {1, 4},
        {1, 5},
        {1, 6},
        {2, 3},
        {2, 4},
        {2, 5},
        {2, 6},
        {3, 4},
        {3, 5},
        {3, 6},
        {4, 5},
        {4, 6},
        {5, 6},
        {1, 2, 3},
        {1, 2, 4},
        {1, 2, 5},
        {1, 2, 6},
        {1, 3, 4},
        {1, 3, 5},
        {1, 3, 6},
        {1, 4, 5},
        {1, 4, 6},
        {1, 5, 6},
        {2, 3, 4},
        {2, 3, 5},
        {2, 3, 6},
        {2, 4, 5},
        {2, 4, 6},
        {2, 5, 6},
        {3, 4, 5},
        {3, 4, 6},
        {3, 5, 6},
        {4, 5, 6},
        {1, 2, 3, 4},
        {1, 2, 3, 5},
        {1, 2, 3, 6},
        {1, 2, 4, 5},
        {1, 2, 4, 6},
        {1, 2, 5, 6},
        {1, 3, 4, 5},
        {1, 3, 4, 6},
        {1, 3, 5, 6},
        {1, 4, 5, 6},
        {2, 3, 4, 5},
        {2, 3, 4, 6},
        {2, 3, 5, 6},
        {2, 4, 5, 6},
        {3, 4, 5, 6},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 6},
        {1, 2, 3, 5, 6},
        {1, 2, 4, 5, 6},
        {1, 3, 4, 5, 6},
        {2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6}};
    int ans = 0;
    for (vector<int> rows : igR)
    {
        if (rows.size() != 0)
        {
            if (rows.size() > H || *std::max_element(rows.begin(), rows.end()) > H)
            {
                continue;
            }
        }
        for (vector<int> columns : igC)
        {
            if (columns.size() != 0)
            {
                if (columns.size() > W || *std::max_element(columns.begin(), columns.end()) > W)
                {
                    continue;
                }
            }
            int count = 0;
            rep(i, H)
            {
                if (std::find(rows.begin(), rows.end(), i + 1) != rows.end())
                {
                    continue;
                }
                rep(j, W)
                {
                    if (std::find(columns.begin(), columns.end(), j + 1) != columns.end())
                    {
                        continue;
                    }
                    if (c[i][j] == '#')
                    {
                        ++count;
                    }
                }
            }
            if (count == K)
            {
                ++ans;
            }
        }
    }
    cout << ans << endl;
}