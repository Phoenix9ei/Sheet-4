#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    int left = 0;
    int right = S.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (S[left] != S[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
