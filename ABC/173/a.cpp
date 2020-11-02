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
    if (N%1000 == 0){
        cout << 0 << endl;
    }else{
        cout << 1000 * (N / 1000 + 1) - N << endl;
    }
}