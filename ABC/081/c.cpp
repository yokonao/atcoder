#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    int C[200000]{0};
    for (int a : A){
        ++C[a];
    }
    sort(C, C + N, greater<>());
    cout << N - accumulate(C, C + K, 0) << endl;
}