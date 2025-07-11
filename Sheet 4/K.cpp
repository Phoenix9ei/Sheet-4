#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    while (N--)
        {
        string S, T, result;
        cin >> S >> T;
        int max_len = max(S.size(), T.size());
        for (int i = 0; i < max_len; ++i)
         {
            if (i < S.size())
            {
                result += S[i];
            }
            if (i < T.size())
             {
                result += T[i];
            }
        }
        cout << result << endl;
    }
}
