#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    vector<int> D;
    int ans = 1;
    cin >> N;
     for (int i = 0; i < N; ++i)
    {
        int d;
        cin >> d;
        D.push_back(d);
    }
    sort(D.rbegin(), D.rend());
    int tmp = D[0];
     for (int i = 0; i < N; ++i)
    {
        if(D[i] != tmp){
            ++ans;
            tmp = D[i];
        }
    }
    cout << ans << endl;
}