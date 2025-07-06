#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int min_index = min(s1.size(), s2.size());
    int flag = -1;

    for (int i = 0; i < min_index; i++)
    {
        if (s1[i] > s2[i])
        {
            cout << s2 << endl;
            flag = 0;
            break;
        }
        else if (s1[i] < s2[i])
        {
            cout << s1 << endl;
            flag = 0;
            break;
        }
    }

    if (flag == -1)
    {
        if (s1.size() < s2.size())
        {
            cout << s1 << endl;
        }
        else if (s1.size() > s2.size())
        {
            cout << s2 << endl;
        }
        else
        {
            cout << s1 << endl;
        }
    }

    return 0;
}
