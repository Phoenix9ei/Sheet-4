#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;
        bool found = false;

        for (int i = 0; i < S.length() - 2; i++) {
            if ((S[i] == '0' && S[i+1] == '1' && S[i+2] == '0') ||
                (S[i] == '1' && S[i+1] == '0' && S[i+2] == '1')) {
                found = true;
                break;
            }
        }

        if (found)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }
}

