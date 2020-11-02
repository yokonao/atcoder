#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;
    bool ans = false;
    for (int x = 0; x <= N; ++x)
    {
        int y = 0;
        while (true)
        {
            int z = N - x - y;
            if (10000 * x + 5000 * y + 1000 * z == Y)
            {
                ans = true;
                cout << x << " ";
                cout << y << " ";
                cout << z << endl;
                return 0;
            }
            if (x + y == N)
            {
                break;
            }
            ++y;
        }
    }
    if (ans == false)
    {
        cout << "-1 -1 -1" << endl;
    }
}