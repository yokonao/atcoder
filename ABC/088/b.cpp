#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    vector<int> A;
    cin >> N;
    for (int i = 0; i < N; ++i){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.rbegin(), A.rend());
    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0){
            Alice += A[i];
        }
        else{
            Bob += A[i];
        }
    }
    cout << Alice - Bob << endl;
}