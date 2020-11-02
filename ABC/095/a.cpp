#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    int value = 700;
    if (S[0] == 'o')
        value += 100;
    if (S[1] == 'o')
        value += 100;
    if (S[2] == 'o')
        value += 100;
    cout << value << endl;
}